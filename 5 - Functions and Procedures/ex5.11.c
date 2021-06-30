#include <stdlib.h>
#include <stdio.h>

// ex11 to ex16
int isDigit(char c);
int isAlpha(char c);
int isAlphaNum(char c);
int isLower(char c);
int isUpper(char c);
int isSpace(char c);
char toLower(char c);
char toUpper(char c);
int isSquare(int x, int y);
int Minus(int x);
int isSpecial(int x);
int Cube(int x);
int isVogal(char c);

int main(){	
	int x, y, res;
	char c;

	/*
	//res = isDigit('9');
	//res = isAlpha('a');
	//res = isAlphaNum('!');
	//res = isSpace(' ');
	//res = isSquare(25, 5);
	//res = isSpecial(2);
	//res = isVogal('a');

	if(res)
		printf("TRUE\n");
	*/
	
	//printf("%c\n", toLower('A') );
	//printf("%c\n", toUpper('a') );
	//printf("%d\n", Minus(2) );

	
	return 0;
}

int isDigit(char c){
	return (c >= '0' && c <= '9');
}

int isAlpha(char c){
	return ( (c >= 'a' && c <= 'z') ||
	(c >= 'A' && c <= 'Z') );
}

int isAlphaNum(char c){
	return isDigit(c) || isAlpha(c) ;
}

int isLower(char c){
	return (c >= 'a' && c <= 'z');
}

int isUpper(char c){
	return (c >= 'A' && c <= 'Z');
}

int isSpace(char c){
	return (c == ' ' || c == '\t');
}

char toLower(char c){
	if(isUpper(c))
		return c + 'a' - 'A';
	else
		return c;
}

char toUpper(char c){
	if(isLower(c))
		return c + 'A' - 'a';
	else
		return c;
}

int isSquare(int x, int y){
	return x == y*y; // if (x == y^2) return true;
}

int Minus(int x){
	if (x > 0)
		return -x;
	else
		return x;
}

int isSpecial(int x){
	return (2 * x == x * x);
}

int Cube(int x){
	return x * x * x;
}

int isVogal(char c){
	return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
	c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'u';

}
