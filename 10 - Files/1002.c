#include <stdlib.h>
#include <stdio.h>

/*  Read a text file with student names and grades and return them on the screen if approved
	in: ./1002 grades.txt
*/
int main(int argc, char *argv[]){
	FILE *fp;
	char name[100];
	int grade;

	if(argc != 2){
		printf("Syntax: \n\n%s File\n\n", argv[0]);
		exit(1);
	}

	if((fp = fopen(argv[1], "r")) == NULL){
		printf("Impossible to open the file %s\n", argv[1]);
		exit(2);
	}

	while(fscanf(fp, "%s %d", name, &grade) != EOF)
		if(grade >= 5)
			printf("%s %d\n", name, grade);

	fclose(fp);
	
	return 0;
	
}

