#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DIM 100

int Is_Len_Ok(char *s, int length);
int Is_Len_Ok_2(char *s, int length);

int main(){
	char s[DIM] = "OLA";
	int length  = 3;

	int res = Is_Len_Ok_2(s, length);

	printf("%d\n", res);

	return 0;
}

int Is_Len_Ok(char *s, int length){
	if(strlen(s) == length)
		return 1;
	else
		return 0;
}

int Is_Len_Ok_2(char *s, int length){
	return strlen(s) == length ;
}