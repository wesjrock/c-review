#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define OP_EXIT "EXIT"

// given a string, replace each first character of a word with an uppercase letter
char * wordupr(char *s);

// return the number of digits in a string
int strcountc(char *s, char ch);

// returns an inverted string
char* strrev(char *s);

// compare strings without sensitivity to case
int stricmp(char *s1, char *s2);


// Given a string "name", split it into first and last name
void split_names(char *name, char *last_name);


int main(){
	char name[100];
	char last_name[20];

	// for(;;) is equivalent to while(1)
	for(;;){
		printf("Name: ");
		gets(name);

		if(stricmp(name, "EXIT") == 0)	break;

		split_names(name, last_name);

		printf("%s, %s\n", wordupr(last_name), wordupr(name) );
	}

	return 0;
}

char * wordupr(char *s){
	int i;

	if(strlen(s) == 0)	return s;

	s[0] = toupper(s[0]);

	for(i = 1; s[i] != '\0'; i++){
		if(isupper(s[i]))
			s[i] = tolower(s[i]);
		else if(s[i] == ' '){
			s[i + 1] = toupper(s[i + 1]);
			i++;
		}
	}

	return s;
}

int strcountc(char *s, char ch){
	int i, count;

	for(i = count = 0; s[i] != '\0'; i++){
		if(s[i] == ch)
			count++;
	}

	return count;
}

char* strrev(char *s){
	int i, len;
	char aux;

	for(i = 0, len = strlen(s) - 1; i < len; i++, len--){
		aux = s[i];
		s[i] = s[len];
		s[len] = aux;
	}

	return s;
}

int stricmp(char *s1, char *s2){
	int i = 0;

	while( tolower(s1[i]) == tolower(s2[i])  && s1[i] != '\0')
		i++;

	// return the result according to the ascii table
	return ( (unsigned char) tolower(s1[i]) -  (unsigned char) tolower(s2[i]) );
}

void split_names(char *name, char *last_name){
	int i, j;

	// if there's only one or zero words in the string name, then there's no last name
	if(strcountc(name, ' ') == 0){
		last_name[0] = '\0';
		return;
	}

	// If there is a last name
	for(i = strlen(name) - 1, j = 0; name[i] != ' '; ){
		last_name[j] = name[i];
		j++;
		i--;
	}
	last_name[j] = '\0';
	name[i] = '\0';

	// Since the last_name was placed from the end to the beginning, it is necessary to invert it
	strrev(last_name);
}
