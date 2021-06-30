#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#define DIM 50

// return the character index in a string
int indexchar(char *s, char ch);
int indexchar_2(char *s, char ch);


int main(){
	int index;
	char s[DIM] = "banana";

	index = indexchar_2(s, 'n');

	printf("Index = %d\n", index);

	return 0;
}

int indexchar(char *s, char ch){
	int i;

	for(i = 0; s[i] != '\0'; i++){
		if(s[i] == ch)
			return i;
	}
	return -1;
}

int indexchar_2(char *s, char ch){
	int i = 0;

	while(s[i] != ch &&  s[i] != '\0')
		i++;

	if(s[i] == '\0')
		return -1;
	else
		return i;
}
