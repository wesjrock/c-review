#include <stdlib.h>
#include <stdio.h>

// return the length of the string
int my_strlen_1(char *s);
int my_strlen_2(char *s);

// return true if string is null
int isnull(char *s);
int isnull_2(char *s);

int main(){
	int length, res;

	//length = my_strlen_1("");     			// output: 0
	//length = my_strlen_1("test");     		// output: 4

	//char s[10] = "test";			
	//length = my_strlen_1(s);					// output: 4

	//length = my_strlen_2("test");				// output: 4

	//printf("string length = %d\n", length);


	char v[10] = "";
	res = isnull(v);	

	printf("%d\n", res);

}

int my_strlen_1(char *s){
	int i = 0;

	while(s[i] != '\0')
		i++;

	return i;
}

int my_strlen_2(char *s){
	int i;

	for(i = 0; s[i] != '\0'; i++) 
		;
	
	return i;	
}

int isnull(char *s){
	return (s[0] == '\0');
}

int isnull_2(char *s){
	return (my_strlen_1(s) == 0);
}