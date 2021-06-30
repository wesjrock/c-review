#include <stdlib.h>
#include <stdio.h>

// ex7
long int num(int n_hours, char type);

int main(){
	int n_hours;
	char type;

	printf("Type a value in hours and its conversion method\n");
	printf("You can convert your value to minutes or seconds\n");
	printf("Example: \n2 h\n3 m\n4 s\n\n");

	scanf("%d %c", &n_hours, &type);

	if(type == 'm' || type == 's'
		|| type == 'M' || type == 'S'){
		printf("num(%d, '%c')   --> %ld\n", n_hours, type, num(n_hours, type));
	}

	return 0;
}

long int num(int n_hours, char type){
	switch(type){
		case 'm':
		case 'M':
			return (long)n_hours * 60;
		break;
		case 's':
		case 'S':
			return (long)n_hours * 3600;
		break;
		default:
		 	return 0;
	}
}
