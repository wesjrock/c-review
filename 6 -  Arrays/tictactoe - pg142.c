#include <stdlib.h>
#include <stdio.h>

#define DIM 3

// Initializing an array based on a tic tac toe game
int main(){
	char tic[DIM][DIM] = { {' ' ,' ' ,' ' }, {' ' ,' ' ,' ' }, {' ' ,' ' ,' ' } } ;
	int i, j;

	tic[0][0] = 'X';
	tic[1][1] = 'X';
	tic[0][2] = 'O';
	tic[2][2] = 'O';

	for(i = 0; i < DIM; i++){
		for(j = 0; j < DIM; j++)
			printf("%c %c", tic[i][j], j == DIM - 1 ? ' ' : '|' );
		if(i != DIM - 1) printf("\n---------\n");
	}

	return 0;
}