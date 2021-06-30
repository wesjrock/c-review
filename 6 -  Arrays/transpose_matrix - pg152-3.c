#include <stdlib.h>
#include <stdio.h>

#define MAX 3

void print_matrix(int m[MAX][MAX]);
int transpose(int m[MAX][MAX]);

int main()
{
	int count = 0;
	int m[MAX][MAX] = { {0, 1, 2}, 
			  		    {3, 4, 5},
			  			{6, 7, 8} };

	printf("\nMatrix:\n\n");
	print_matrix(m);

	count = transpose(m);

	printf("\nTranpose:\n\n");
	print_matrix(m);

	printf("\nNumber of positions exchanged: %d\n\n", count);
	
	return 0;
}

void print_matrix(int m[MAX][MAX]){
	int i, j;

	for(i = 0; i < MAX; i++){
		for(j = 0; j < MAX; j++){
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
}

int transpose(int m[MAX][MAX]){
	int i, j, aux, count = 0;

	for(i = 0; i < MAX; i++){
		for(j = i + 1; j < MAX; j++){
			aux = m[i][j];
			m[i][j] = m[j][i];
			m[j][i] = aux;

			printf("\nExchanging positions [%d][%d] with [%d][%d]\n", i, j, j, i);

			count++;
		}
	}
	return count;
}
