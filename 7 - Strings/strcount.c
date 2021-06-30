#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#define DIM 50

// return the number of occurrences of a given character in a string
int strcountc(char *s, char ch);

// return the number of digits in a string
int strcountd(char *s);

int main(){
	int res;

	// Testing strcountc
	//char s[DIM] = "banana";
	//char character = 'a';

	//res = strcountc(s, character);
	//printf("Number of occurrences of '%c' = %d\n", character, res);

	// Testing strcountd
	res = strcountd("test123");
	printf("The number of digits in the string = %d\n", res);

	return 0;
}

int strcountc(char *s, char ch){
	int i, count;

	for(i = count = 0; s[i] != '\0'; i++){
		if(s[i] == ch)
			count++;
	}

	return count;
}

int strcountd(char *s){
	int i, count;

	for(i = count = 0; s[i] != '\0'; i++){
		if(isdigit(s[i]))
			count++;
	}

	return count;
}