#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DIM 100

// Gives a string, separates lowercase characters to the left and uppercase to the right
// in:  aAbCDdE
// out: abdACDE
char * lower_upper(char *s);

int main(){
	char s[DIM] = "aAbCDdE";

	printf("%s\n", lower_upper(s));

	return 0;
}

char * lower_upper(char *s){
	int i;
	int len = strlen(s);
	int permutations = 1;
	char aux;

	/* when 'permutations' gets to 0 and the 'for' loop breaks out,
	   there are no more characters to swap */
	while(permutations){
		permutations = 0;
		for(i = 0; i < len - 1; i++){
			if(isupper(s[i]) && islower(s[i + 1])){
				aux = s[i];
				s[i] = s[i + 1];
				s[i + 1] = aux;
				permutations = 1;
			}
		}
	}

	return s;
}