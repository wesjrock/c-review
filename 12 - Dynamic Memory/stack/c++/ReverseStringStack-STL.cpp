/* Reverse a string using a stack in C++ */

#include <iostream>
#include <stack>
using namespace std;

void ReverseString(char *C, int n);

int main(){
	char C[6 + 1] = "banana";

	ReverseString(C, 7);

	for(int i = 0; i < 7; i++)
		printf("%c", C[i]);
	printf("\n");

	return 0;
}

void ReverseString(char *C, int n){
	stack<char> S;

	// loop for push
	for(int i = 0; i < n; i++)
		S.push(C[i]);

	// loop for pop
	for (int i = 0; i < n; i++)
	{
		C[i] = S.top(); // overwrite the character at index i
		S.pop();
	}
}