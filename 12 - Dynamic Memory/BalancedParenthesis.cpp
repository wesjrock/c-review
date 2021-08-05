/*
  C++ Program to check for balanced parentheses in an expression using stack.
  Given an expression as string comprising of opening and closing characters
  of parentheses - (), braces - {} and brackets - [], we need to 
  check whether symbols are balanced or not. 
*/

#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool ArePair(char opening, char closing);
bool AreParenthesesBalanced(string exp);

int main(){
	string expression;

	cout<<"Enter an expression: ";
	cin>>expression;

	if(AreParenthesesBalanced(expression))
		cout<<"Balanced\n";
	else
		cout<<"Not Balanced\n";
	
	return 0;
}

bool ArePair(char opening, char closing){
	if(opening == '(' && closing == ')')	return true;
	if(opening == '[' && closing == ']')	return true;
	if(opening == '{' && closing == '}')	return true;
	return false;
}

bool AreParenthesesBalanced(string exp){
	stack<char> S;

	for(int i = 0; i < exp.length(); i++){
		if(exp[i] == '(' || exp[i] == '[' || exp[i] == '{' )
			S.push(exp[i]);
		else if(exp[i] == ')' || exp[i] == ']' || exp[i] == '}' ){
			if(S.empty() || !ArePair(S.top(), exp[i]))
				return false;
			else
				S.pop();
		}
	}

	return S.empty() ? true : false;
}