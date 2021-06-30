#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{
	int day;
	char month[3 + 1];
	int year;
} DATE;

typedef struct Person{
	int age;
	float salary;
	DATE dt_Birth;
} PERSON;

int main(int argc, char *argv[]){
	int i;

	//struct Person man, woman[3];  // syntax #1

 	// syntax #2
	PERSON man = {25, 125.0, {8, "NOV", 1985} },
		   woman[3];

	// accessing structure variables
	man.dt_Birth.day++;
	woman[1].dt_Birth.year = 1999;
	strcpy(woman[2].dt_Birth.month, "DEC");

	// show the first letter of each month for each woman
	for(i = 0; i < 3; i++)
		putchar(woman[i].dt_Birth.month[0]);

	// same as above
	for(i = 0; i < 3; i++)
		putchar(*woman[i].dt_Birth.month);

	
	return 0;
}

