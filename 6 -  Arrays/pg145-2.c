// Loto: generate random numbers and bet

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define NUMS 49			// Maximum number for the board
#define MIN_APOSTA 6	// Minimum bet of 6 numbers
#define NUM_LIN 7		// Number of lines to print the board

void Inic_Random();
void Inic(int v[NUMS]);
int Let_Ns_Apostar();
void Gerar(int *v, int n);
void Apresentar(int res[]);

int main(){
	int vetor[NUMS];
	int n_nums;					// Number of bets 6..49

	Inic_Random();

	while(1){
		Inic(vetor);

		if( (n_nums = Let_Ns_Apostar() ) == 0) break;

		Gerar(vetor, n_nums); 	// Generate the numbers to bet

		Apresentar(vetor);		// Print the board
	}

	return 0;
}

// Seed to generate random numbers
void Inic_Random(){
	long ultime;

	time(&ultime);
	srand( (unsigned) ultime);
}

// Array initialization 
void Inic(int v[]){
	int i;

	for(int i = 0; i < NUMS; i++)
		v[i] = 0;
}

// Read the value for number of bets
int Let_Ns_Apostar(){
	int n;

	do{
		printf("How many numbers do you want to bet (0 - Exit): ");
		scanf("%d", &n);
	}while( (n < MIN_APOSTA || n > NUMS) && n != 0 );

	return n;
}

// Generates n random positions for selecting numbers in the board
// 1 indicates that the number has been selected
void Gerar(int *v, int n){
	int i, index;

	for(i = 1; i <= n; i++){
		index = rand() % NUMS;  // returns a number between 0 and NUMS - 1
		
		if(v[index] == 0)		// wasn't selected
			v[index] = 1;
		else					// if the number has already been selected
			i--;				// decrease the counter so it can continue generating random numbers
	}
}

// Print XX for the numbers that has been selected to bet
void Apresentar(int res[]){
	int i;

	for(i = 0; i < NUMS; i++){
		if(res[i] == 0)								// if a number hasn't been selected
			printf(" %2d", i + 1);
		else										// if a number has been selected
			printf(" XX");
		if( (i + 1) % NUM_LIN == 0) putchar('\n');	// skip a line in the board
	}
	putchar('\n');
}


