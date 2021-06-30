#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DIM 50

int strcountc(char *s, char ch);

// remove non repeated characters of a string, i.e. preserve the repeated characters
char * repetitions(char *s);


int main(){
	char s[DIM] = "lettuce";

	repetitions(s);

	printf("%s\n", s);

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

char * repetitions(char *s){
	int i, j;

	for (i = j = 0; s[i] != '\0'; i++){
		// grouping repeated characters
		if(strcountc(s, s[i]) > 1){
			s[j] = s[i];
			j++;
		}
	}
	s[j] = '\0';

	return s;
}