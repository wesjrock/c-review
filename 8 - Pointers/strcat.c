#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Explanation on page 193
char * my_strcpy(char *dest, char *source);
char * my_strcat(char *dest, char *source);

int main(){
	char source[10] = "hello";
	char dest[10] = "world";

	my_strcat(dest, source);
	printf("%s\n", dest);

	return 0;
}

char * my_strcpy(char *dest, char *source){
	char *tmp = dest;

	while( (*dest = *source) ){
		dest++;
		source++;
	}

	return tmp;
}

char * my_strcat(char *dest, char *source){
	my_strcpy(dest + strlen(dest), source);

	// which in this case the size of the word "world" is sizeof(char) * 5
	//my_strcpy(dest + (sizeof(char) * 5), source);

	return dest;
}
