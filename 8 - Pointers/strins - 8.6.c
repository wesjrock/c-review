#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Copies the string source to dest in reverse order
char * strrcpy(char *dest, char *source);

// Inserts the string source at the beginning of dest
char * strins(char *dest, char *source);

int main(){
	char source[50] = "University";
	char dest[50] = "SaoPaulo"; 
	
	strins(dest, source);

	printf("%s\n", dest);

	return 0;
}

char * strrcpy(char *dest, char *source){
	int len;

	for(len = strlen(source); len >= 0; len--)
		dest[len] = source[len];

	return dest;
}

char * strins(char *dest, char *source){ 

	// In this case strlen(source) is equal to sizeof(char) * 10
	strrcpy(dest + strlen(source), dest); // "          SaoPaulo"
	
	memcpy(dest, source, strlen(source));

	return dest;
}
