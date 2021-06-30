#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Searches for a substring in a string and returns the address from the string
   in: "HelloWorldABC", "Wor"
   out: WorldABC
*/
char * strstr_2(char *str1, char *str2);

int main(){
	char haystack[50] = "HelloWorldtesting";
	char needle[50] = "orl";
	char *ptr;

	ptr = strstr_2(haystack , needle);

	printf("%s\n", ptr);

	return 0;
}

char * strstr_2(char *str1, char *str2){
	int i, ii, j;
	int len = strlen(str1) - strlen(str2); 

	for(i = 0; i <= len; i++){
		for(ii = i, j = 0; str1[ii] == str2[j] && str2[j] != '\0'; j++, ii++)
			;
		if(str2[j] == '\0')
			return str1 + i; 
	}

	return NULL;
}