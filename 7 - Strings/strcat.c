#include <stdlib.h>
#include <stdio.h>

#define SIZE 25

int my_strlen(char *s);
char* my_strcat(char* dest, char* orig);
char* my_strcat_2(char* dest, char* orig);
char* my_strcat_3(char* dest, char* orig);
char* my_strcat_4(char* dest, char* orig);

int main()
{
	char orig[SIZE] = "banana";
	char dest[SIZE] = "apple";

	// my_strcat(dest, orig);
	// my_strcat_2(dest, orig);
	// my_strcat_3(dest, orig);
	my_strcat_4(dest, orig);

	printf("%s\n", dest);

	return 0;
}

int my_strlen(char *s){
	int i = 0;

	while(s[i] != '\0')
		i++;

	return i;
}

char* my_strcat(char* dest, char* orig){
	int i, len;

	for(i = 0, len = my_strlen(dest); orig[i] != '\0'; i++, len++){
		dest[len] = orig[i];
	}
	dest[len] = '\0';

	return dest;
}

char* my_strcat_2(char* dest, char* orig){
	int i, len;

	for(i = 0, len = my_strlen(dest); orig[i] != '\0'; i++){
		dest[len + i] = orig[i];
	}
	dest[len + i] = '\0';

	return dest;
}

// the solutions below are similar to our previous strcpy
char* my_strcat_3(char* dest, char* orig){
	int i = 0, len = my_strlen(dest);

	while( (dest[len + i] = orig[i]) ){
		i++;
	}

	return dest;
}

char* my_strcat_4(char* dest, char* orig){
	int i = 0, len = my_strlen(dest);

	while( (dest[len++] = orig[i++]) )
		;
	
	return dest;
}
