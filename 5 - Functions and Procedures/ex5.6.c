#include <stdlib.h>
#include <stdio.h>

// ex6
long int n_seconds(int n_hours);


int main(){
	int n_hours;

	scanf("%d", &n_hours);
	printf("n_hours(%d) --> %ld\n", n_hours, n_seconds(n_hours));


	return 0;
}

long int n_seconds(int n_hours){
	return (long)n_hours * 3600 ;
}