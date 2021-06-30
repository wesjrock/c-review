#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Person{
	char lastName[60], sex;
	int age;
} John, Mary; 						// syntax for declaring struct variables #1

struct Date{
	int day;
	char month[12];
	int year;
} birth = {17, "June", 1989}; 		// syntax for declaration and assignment of struct variables #1

/* declaring a type ANIMAL for struct Animal; 
   Note that the name Animal isn't necessary when it comes to using this structure */
typedef struct Animal{				
	char name[50];
	char breed[50];
} ANIMAL;

int main(int argc, char *argv[]){
	struct Person Steve; 			// syntax for declaring struct variables #2

	// syntax for declaration and assignment of struct variables #2
	struct Person John = {"Lennon", 'M', 30}; 

	strcpy(Steve.lastName, "Harrison");
	Steve.sex = 'M';
	Steve.age = 20;

	strcpy(Mary.lastName, "Swanson");
	Mary.sex = 'F';
	Mary.age = 22;

	printf("%-15s%c\t%d\n", Steve.lastName, Steve.sex, Steve.age);
	printf("%-15s%c\t%d\n", Mary.lastName, Mary.sex, Mary.age);
	printf("%-15s%c\t%d\n", John.lastName, John.sex, John.age);
	printf("%-15d%s\t%d\n", birth.day, birth.month, birth.year);
	puts("");


	// Renaming struct Person to People so it can be used just as a basic type
	typedef struct Person People;	

	People Charles;

	strcpy(Charles.lastName, "Lee Ray");
	Charles.sex = 'M';
	Charles.age = 25;

	People Kevin = {"Fed", 'M', 40};

	printf("%-15s%c\t%d\n", Charles.lastName, Charles.sex, Charles.age);
	printf("%-15s%c\t%d\n", Kevin.lastName, Kevin.sex, Kevin.age);
	puts("");

	ANIMAL Link = {"Link", "Pug"};

	ANIMAL Zelda;

	strcpy(Zelda.name, "Zelda");
	strcpy(Zelda.breed, "Pomeranian");

	printf("%-15s%s\n", Link.name, Link.breed);
	printf("%-15s%s\n", Zelda.name, Zelda.breed);
	puts("");

	// Assigning structures to structures
	Zelda = Link;
	printf("%-15s%s\n", Zelda.name, Zelda.breed);
	puts("");

	
	return 0;
}

