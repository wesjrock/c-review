#include <stdlib.h>
#include <stdio.h>

const int size = 10;

// Compare two arrays according to an index
// Return true if they are equal or false if they are unequal
int my_memcmp(char *s1, char *s2, int pos);

int main(){
	int res;
	char s1[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	char s2[size] = {1, 2, 3, 4, 5, 7, 8, 9, 10, 11};
	
	int index = 6; // size - 1 because array index starts at 0

	res = my_memcmp(s1, s2, index);
	
	if(res == 1)
		printf("EQUAL\n");
	else
		printf("UNEQUAL\n");

	return 0;
}

int my_memcmp(char *s1, char *s2, int pos){
	int i;

	for(i = 0; i < pos; i++){
		printf("Comparing %d with %d\n", s1[i], s2[i]);
		if(s1[i] != s2[i])
			return 0;
	}

	// if the loop ended without return 0, all elements are equal
	return 1;
}