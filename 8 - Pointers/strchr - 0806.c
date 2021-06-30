#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*  Given a string and a character, returns the first occurrence of the character address
	input:  "Hello World" 'o'
	output: o World
*/
char * my_strchr(char *str, char ch);
char * my_strchr_2(char *str, char ch);

int main(){
	char s[100], c;

	printf("Enter a string: ");
	gets(s);
	printf("Enter a character: ");
	scanf("%c", &c);

	puts(my_strchr_2(s, c));

	return 0;
}

char * my_strchr(char *str, char ch){
	int i;

	for(i = 0; str[i] != '\0'; i++){
		if(str[i] == ch)
			return &str[i];
	}

	return NULL;
}

char * my_strchr_2(char *str, char ch){
	while(*str != '\0')
		if(*str == ch)
			return str;
		else
			str++;

	return NULL;
}
