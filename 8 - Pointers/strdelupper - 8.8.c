#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*  Given a string, remove all its uppercase characters 
	in:  CsInfo DoT
	out: snfo o
*/
char * StrDelUpper(char *s);
char * StrDelUpper_2(char *s);

int main(){
	char s[] = "CsInfo DoT";
	char *ptr;

	ptr = StrDelUpper_2(s);

	printf("%s\n", ptr);

	return 0;
}

// Function without pointers
char * StrDelUpper(char *s){
	int i, j;

    for(i = 0; s[i] != '\0'; i++){
    	while(isupper(s[i])){     		
        	for(j = i; s[j] != '\0'; j++){
            	s[j] = s[j + 1];
        	}
        s[j] = '\0';
       }
    }

	return s;	
}

// Function with pointers
/* If it isn't uppercase, copies from s to ptr */
char * StrDelUpper_2(char *s){
	char *prim, *ptr;

	ptr = s;
	prim = ptr;

	while(*s){ 				// equivalent to while(*s != '\0')
		if(!isupper(*s)){
			*ptr = *s;
			ptr++;
		}
		s++;
	}
	*ptr = '\0';

	return prim;
}
