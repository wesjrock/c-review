#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DIM 50

int strcountc(char *s, char ch);

// returns a string with a space between each character, except when it already has a space
char * xspace(char *s);

int main(){
	char s[DIM];

	strcpy(s, "abc d");

	xspace(s);
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

char * xspace(char *s){
	// i starts at the end of the string
	int i = strlen(s); 

	int n_of_spaces = strcountc(s, ' ');

	// Total dimension of the final string
	int Dim = (2 * i) - n_of_spaces;

	s[Dim] = '\0';
	Dim--;

	for(--i; i >= 0; i--){
		//printf("i = %d\n", i);
		if(s[i] == ' '){		// If it is a space, copy the character to Dim position
			s[Dim] = s[i];
			Dim--;
		}
		else{
			s[Dim] = ' ';		// If s[i] isn't a space, we put a space in Dim position
			Dim--;				// Decrement, and put the character in Dim position
			s[Dim] = s[i];	
			Dim--;
		}
	}
	//printf("Dim = %d\n", Dim);

	return s;
}
