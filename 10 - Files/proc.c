#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*	Given a file formatted as below, return the results of the operations and its total sum
	3+2
	5*3
	3*5
	10/5
	-5-7
	2*-4

	Option:	-t   // Show only total sum

	in: ./proc -t [proc.txt]
	in: ./proc [proc.txt]
*/
int main(int argc, char *argv[]){
	FILE *fp;
	int only_total_sum = 0;
	int n1, n2; 				// operands
	char operator;				// operator
	long res;					// result of the expression
	long total_sum = 0L;

	if(argc == 3)
		only_total_sum = ( strcmp(argv[1], "-t") == 0 ); // check if it was typed -t 
	
	if(argc < 2 || argc > 3){
		fprintf(stderr, "Syntax: proc [-t] [file]\n");
		exit(1);
	}

	if( (fp = fopen(argv[argc - 1], "r")) == NULL){
		fprintf(stderr, "Impossible to open file %s\n\n", argv[argc - 1]);
		exit(2);
	}

	while( fscanf(fp, "%d%c%d", &n1, &operator, &n2) == 3){
		switch(operator){
			case '+': res = n1 + n2; break;
			case '-': res = n1 - n2; break;
			case '*': res = n1 * n2; break;
			case '/': res = n1 / n2; break;
		}

		if(!only_total_sum)
			printf("%3d  %c %3d = %3ld\n", n1, operator, n2, res);
		total_sum += res;
	}

	printf("\nTotal sum  = %3ld\n\n", total_sum);

	fclose(fp);
	
	return 0;
}

