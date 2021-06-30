#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Returns the last occurrence address of the specified character in the string
char * my_strrchr(char *s, char ch);
char * my_strrchr_2(char *s, char ch);
char * my_strrchr_3(char *s, char ch);

// Enter your full name but only shows the surname
int main(){
	char name[100];
	char *surname;

	printf("Enter your full name: ");
	gets(name);

	surname = my_strrchr_3(name, ' ');

	if(surname == NULL) // there's no last name, no space between names
		surname = name; 
	else
		surname++; // because surname was pointing to ' '

	puts(surname);

	return 0;
}

char * my_strrchr(char *s, char ch){
	int i;

	for(i = strlen(s) - 1; i >= 0; i--){
		if(s[i] == ch)
			return &s[i];
	}

	return NULL;
}

char * my_strrchr_2(char *s, char ch){
	int i;
	char *ptr = NULL;

	for(i = 0; s[i] != '\0'; i++){
		if(s[i] == ch)
			ptr = &s[i];
	}

	return ptr;
}

char * my_strrchr_3(char *s, char ch){
	char *ptr = s + strlen(s) - 1; // last character of the string

	while(ptr >= s)
		if(*ptr == ch)
			return ptr;
		else
			ptr--;

	return NULL;
}
