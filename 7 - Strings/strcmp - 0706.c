#include <stdlib.h>
#include <stdio.h>

// prog0706
// Keep typing names in a loop until you type EXIT to quit the program
// note: strcmp is case sensitive

#define DIM 25

int my_strcmp(char *s1, char *s2);

int main(){
	int res;
	char name[DIM];
	
	do{
		printf("Type a name: \n");
		gets(name);
		printf("%s\n", name);
	} while( my_strcmp(name, "EXIT") != 0  );

	return 0;
}

int my_strcmp(char *s1, char *s2){
	int i = 0;

	while(s1[i] == s2[i] && s1[i] != '\0')
		i++;

	return ( (unsigned char) s1[i] -  (unsigned char) s2[i] );
}