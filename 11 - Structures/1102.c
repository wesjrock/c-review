#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Reading and Printing members of a structure

typedef struct { int Day, Month, Year; } DATE;

typedef struct person{
	char Name[100];
	int Age;
	float Salary;
	DATE Birth;
} PERSON;

void Read_Struct(PERSON *ptr);
void Print_Struct(struct person x);

int main(int argc, char *argv[]){
	struct person p = {"Ringo", 80, 1.000, {7, 7, 1940} };

	Print_Struct(p);
	puts("\n");
	Read_Struct(&p);
	puts("\n");
	Print_Struct(p);
	
	return 0;
}

void Read_Struct(PERSON *ptr){
	printf("Enter a name : "); gets( (*ptr).Name );
	printf("Enter the age : "); scanf("%d" , &(*ptr).Age );
	printf("Enter a salary : "); scanf("%f" , &(*ptr).Salary );
	printf("Enter the birth date [example: 25 12 2000] : "); 
	scanf("%d %d %d", &(*ptr).Birth.Day, &(*ptr).Birth.Month, &(*ptr).Birth.Year );
}

void Print_Struct(struct person x){
	printf("Name		: %s\n", x.Name);
	printf("Age			: %d\n", x.Age);
	printf("Salary		: %f\n", x.Salary);
	printf("Birth Date	: %d/%d/%d\n", x.Birth.Day, x.Birth.Month, x.Birth.Year);
}