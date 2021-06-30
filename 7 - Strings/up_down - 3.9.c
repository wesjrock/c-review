#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DIM 50

/* returns the string in the format Uppercase lowercase
   in:  greek
   out: GrEeK
*/
char * up_down(char *s);

int main(){
	char s[DIM] = "gReEk ALPhAbeT";

	up_down(s);

	printf("%s\n", s);

	return 0;
}

char * up_down(char *s){
	int i, j;

	for(i = 0; s[i] != '\0'; i++){
		if(i % 2 == 0)
			s[i] = toupper(s[i]);
		else
			s[i] = tolower(s[i]);		
	}

	return s;
}
