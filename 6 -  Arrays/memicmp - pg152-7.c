#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

const int size = 10;

// Compare two char arrays according to an index (ignore case)
int my_memicmp(char *s1, char *s2, int pos);

int main(){
	int res;
	char s1[size] = {'a', 'b', 'c', 'd', 'e', 'Z', 'g', 'h', 'i', 'j'};
	char s2[size] = {'A', 'B', 'C', 'D', 'E', '@', 'G', 'H', 'I', 'J'};
	
	int index = 5; // size - 1 because array index starts at 0

	res = my_memicmp(s1, s2, index);
	
	if(res == 1)
		printf("EQUAL\n");
	else
		printf("UNEQUAL\n");

	return 0;
}

int my_memicmp(char *s1, char *s2, int pos){
	int i;

	for(i = 0; i < pos; i++){
		printf("Comparing %c with %c\n", s1[i], s2[i]);
		if(toupper(s1[i]) != toupper(s2[i]))
			return 0;
	}

	// if the loop ended without return 0, all elements are equal
	return 1;
}