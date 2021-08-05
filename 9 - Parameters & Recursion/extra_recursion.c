#include <stdlib.h>
#include <stdio.h>

// Program to understand Recursive Calls
int difference_rec (int start, int end);

int main(int argc, char *argv[]){
	int start = 1;
	int end = 10;
	
	printf("\nFUNCTION RESULT = %d\n", difference_rec(start, end) );
	
	return 0;
}

int difference_rec (int start, int end) {
	printf("start = %d\n", start);
	if (start == end) return 0;
	
	return difference_rec(start + 1, end) + 1;
}