// Tic Tac Toe + ex4 page 152

#include <stdlib.h>
#include <stdio.h>

#define DIM 3
#define SPACE ' '

void start(char s[][DIM]); 				// omitting a dimension
void print_board(char s[DIM][DIM]); 	// showing both dimensions
int check_line(char v[], char ch);
int check_column(char g[DIM][DIM], int col, char ch);
int check_diagonal(char g[DIM][DIM], char ch);
int check_if_won(char g[DIM][DIM], char ch);

int main(){
	char board[DIM][DIM];

	int posx, posy;
	char ch = 'O'; 
	int number_of_plays = 0;

	start(board);

	while(1){
		print_board(board);

		printf("Enter a position with the format Line Column: ");
		scanf("%d %d", &posx, &posy);

		// Check if positions are invalid
		if(posx > DIM || posy > DIM){
			printf("\n\nInvalid Positions\n\n");
			continue;
		}

		posx--; posy--; // Because the array index starts at 0

		if(board[posx][posy] == SPACE){
			board[posx][posy] = ch = (ch == 'O') ? 'X' : 'O';
			number_of_plays++;
			if(check_if_won(board, ch)){
				printf("\n\n****Player %c has won****\n\n", ch);
				break;
			}
		}
		else
			printf("Already occupied position\nPlay Again!!!\n");
		if(number_of_plays == DIM * DIM){
			printf("\n\n****The game ended in a draw****\n\n");
			break;
		}

	}

	print_board(board);

	return 0;
}

void start(char s[][DIM]){
	int i, j;

	for(i = 0; i < DIM; i++)
		for(j = 0; j < DIM; j++)
			s[i][j] = SPACE;
}

void print_board(char s[DIM][DIM]){
	int i, j;

	for(i = 0; i < DIM; i++){
		for(j = 0; j < DIM; j++)
			printf("%c %c", s[i][j], j == DIM - 1 ? ' ' : '|' );
		if(i != DIM - 1) printf("\n---------");
		putchar('\n');
	}
}

int check_line(char v[], char ch){
	return v[0] == v[1] && v[1] == v[2] && v[0] == ch ;
}

int check_column(char g[DIM][DIM], int col, char ch){
	return g[0][col] == g[1][col] && g[1][col] == g[2][col] && g[0][col] == ch ;
}

int check_diagonal(char g[DIM][DIM], char ch){
	return ( g[0][0] == g[1][1] && g[2][2] == g[1][1] && g[0][0] == ch ) ||
	( g[0][2] == g[1][1] && g[2][0] == g[1][1] && g[0][2] == ch ) ;
}

int check_if_won(char g[DIM][DIM], char ch){
	if(check_line(g[0], ch) || check_line(g[1], ch) || check_line(g[2], ch))
		return 1;
	if(check_column(g, 0, ch) || check_column(g, 1, ch) || check_column(g, 2, ch))
		return 1;
	if(check_diagonal(g, ch))
		return 1;
	return 0; 	// Lost the game
}







