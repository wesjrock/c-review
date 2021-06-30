#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DIM 50

// Given a string, puts a specified character from an initial to final position
char * strijset(char *s, int i, int j, char ch);
char * strijset_2(char *s, int i, int j, char ch);

int main(){
	char s[DIM] = "Anabela";
	char ch = '*';
	int initial_pos = 0;
	int final_pos = 20;

	strijset(s, initial_pos, final_pos, ch);

	printf("%s\n", s);

	return 0;
}

char * strijset(char *s, int i, int j, char ch){
	int k, l;

	if(i >= strlen(s))	return s;

	for(k = i, l = j; k <= l && s[k] != '\0'; k++)
		s[k] = ch;
	
	return s;
}


char * strijset_2(char *s, int i, int j, char ch){
	if(i >= strlen(s))	return s;

	while(i <= j && s[i] != '\0'){
		s[i] = ch;
		i++;
	}

	return s;
}

