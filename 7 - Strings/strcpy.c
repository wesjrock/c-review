#include <stdlib.h>
#include <stdio.h>

#define SIZE 25

int my_strlen(char *s);
char* my_strcpy(char* dest, char* orig);
char* my_strcpy_2(char* dest, char* orig);
char* my_strcpy_3(char* dest, char* orig);

int main()
{
	char orig[SIZE] = "banana";
	char dest[SIZE];

	//my_strcpy(dest, orig);
	//my_strcpy_2(dest, orig);
	my_strcpy_3(dest, orig);

	printf("dest: %s\n", dest);
	
	return 0;
}

int my_strlen(char *s){
	int i = 0;

	while(s[i] != '\0')
		i++;

	return i;
}

char* my_strcpy(char* dest, char* orig){
	int i;

	for(i = 0; orig[i] != '\0'; i++){
		dest[i] = orig[i];
	}
	dest[i] = '\0';

	return dest;
}

char* my_strcpy_2(char* dest, char* orig){
	int i;

	/* here the first character to be copied is '\0'
	so we don't have to put it manually */
	for(i = my_strlen(orig); i >= 0 ; i--){
		dest[i] = orig[i];
	}

	return dest;
}

char* my_strcpy_3(char* dest, char* orig){
	/* this solution will make an assigment first and only then
	it will test if the condition inside the loop is true.
	If there is anything different from 0 inside the 'while', the loop
	will continue.
	In C, 0 is FALSE so the loop will break when the '\0' character
	has been found because '\0' is equal to 0 in the ASCII table.
	*/

	int i = 0;
	while( (dest[i] = orig[i]) ){
		i++;
	}

	return dest;
}




