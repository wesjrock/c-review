/*  MEMORY LEAK - Betting Game
	"Jack Queen King" - computer shuffles these cards
	player has to guess the position of the queen
	if he wins, he takes 3 * bet
	if he loses, he looses the bet amount
	player has $100 initially

	// To test memory leak, just remove free() at the end of Play() and 
	// check the used amount of RAM at the task manager, you'll see that memory will increase
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int cash = 100;

void Play(int bet);

int main(int argc, char *argv[]){
	int bet;

	printf("Welcome to the Virtual Casino\n");
	printf("Total cash = $%d\n", cash);

	while(cash > 0){
		printf("What's your bet? $");
		scanf("%d", &bet);
		if(bet == 0 || bet > cash)	break;
		Play(bet);
	}
	return 0;
}

void Play(int bet){
	int i, playerGuess;
	char *C = (char*)malloc(3 * sizeof(char));
	C[0] = 'J';
	C[1] = 'Q';
	C[2] = 'K';

	printf("Shuffling ...\n");
	srand(time(NULL));

	// Swaps characters at position x and y
	for(i = 0; i < 5; i++){
		int x = rand() % 3; // random number between 0, 1 and 2
		int y = rand() % 3;
		int temp = C[x];
		C[x] = C[y];
		C[y] = temp;
	}

	printf("What's the position of the queen - 1, 2 or 3?   ");
	scanf("%d", &playerGuess);
	if(C[playerGuess - 1] == 'Q'){
		cash += 3 * bet;
		printf("You win ! Result = \"%c %c %c\" Total Cash = %d\n ", C[0], C[1], C[2], cash);
	}
	else{
		cash -= bet;
		printf("You lose ! Result = \"%c %c %c\" Total Cash = %d\n ", C[0], C[1], C[2], cash);
	}

	free(C);
}
