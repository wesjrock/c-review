/* SIMPLE DATABASE APPLICATION */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define ARQ "Data.dat"
#define STR_BUFFSIZE 100

#define OP_INSERT      '1'
#define OP_MODIFY      '2'
#define OP_ERASE       '3'
#define OP_PRINT       '4'
#define OP_SEARCH 	   '5'

#define OP_EXIT   	   '0'

#define OP_SEARCH_AGE  '1'
#define OP_SEARCH_NAME '2'

char *MainMenu[] = {
	"1. Insert", 
	"2. Modify",
	"3. Erase",
	"4. Print",
	"5. Search",
	"0. Exit",
	NULL 		// ran out of options  
};

char *SearchMenu[] = {
	"1. Search by age range",
	"2. Search by name",
	"0. Go back",
	NULL		// ran out of options  
};

FILE *fp; 		// global variable (used when multiple functions need to access the data)

typedef struct{
	char  Name[30 + 1];
	int   Age;
	float Salary;
	char  Status; // '*' means the record has been erased
} PERSON;

void Message(char *msg);
void Read_Person(PERSON *p);
void Print_Person(PERSON p);
void Add_Person_File(PERSON p);
void Initialize();
char Menu(char *Options[]);
void Insert_Person();
void Modify_Person();
void Erase_Person();
void Print_Records();
void Search_Age_Range(int ini, int end);
void Search_Name(char *s);

int main(int argc, char *argv[]){
	char Option;

	Initialize();

	while( (Option = Menu(MainMenu)) != OP_EXIT )
		switch(Option){
			case OP_INSERT: Insert_Person(); break;
			case OP_MODIFY: Modify_Person(); break;
			case OP_ERASE: Erase_Person();   break;
			case OP_PRINT: Print_Records();  break;
			case OP_SEARCH: 
				while( (Option = Menu(SearchMenu)) != OP_EXIT )
					switch(Option){
						case OP_SEARCH_AGE: {
							int ini, end;
							printf("Enter an age range [example: 25 46]: ");
							scanf("%d%d", &ini, &end); fflush(stdin);
							Search_Age_Range(ini, end);
							break;
						}
						case OP_SEARCH_NAME: {
							char string[STR_BUFFSIZE + 1];
							printf("Enter a name to search: ");
							scanf("%s", string); fflush(stdin);
							Search_Name(string);
							break;
						}
					} 
		}
	
	return 0;
}

void Message(char *msg){
	puts(msg);
	getchar();
}

void Read_Person(PERSON *p){
	printf("Name:    : "); scanf("%s", p->Name);
	printf("Age:     : "); scanf("%d", &p->Age);
	printf("Salary   : "); scanf("%f", &p->Salary);
	p->Status = ' ';
	fflush(stdin);
}

void Print_Person(PERSON p){
	printf("%-30s  %3d  %10.2f\n", p.Name, p.Age, p.Salary);
}

void Add_Person_File(PERSON p){
	fseek(fp, 0L, SEEK_END);
	if( fwrite(&p, sizeof(p), 1, fp) != 1)
		Message("Add Person: record writing failed");
}

/* Check if the file already exists. If it doesn't, it is created.
   If it already exists, open it in Read and Write Mode (r + b) */
void Initialize(){
	fp = fopen(ARQ, "r+b"); // try to open the file

	if(fp == NULL){
		fp = fopen(ARQ, "w+b"); // create it
		if(fp == NULL){
			fprintf(stderr, "FATAL ERROR: Impossible to create data file\n");
			exit(1);
		}
	}
}

/* Print a menu with options from a string array.
   Selects an option, using the first character of each string */
char Menu(char *Options[]){
	int i;
	char ch;

	while(1){
		//system("clear");
		for(i = 0; Options[i] != NULL; i++)
			printf("%s\n", Options[i]);

		printf("\n\nOption: ");
		ch = getchar();
		fflush(stdin);

		for(i = 0; Options[i] != NULL; i++)
			if(Options[i][0] == ch)
				return ch;
	}
}

void Insert_Person(){
	PERSON x;

	Read_Person(&x);
	Add_Person_File(x);
}

void Modify_Person(){
	PERSON x;
	long int record_num;

	printf("Enter the record number [# between 1 and n]: ");
	scanf("%ld", &record_num);
	fflush(stdin);

	if( fseek(fp, (record_num - 1) * sizeof(PERSON) , SEEK_SET) != 0 ){
		Message("Non-existent record!");
		return;
	}
	if( fread(&x, sizeof(PERSON), 1, fp) != 1 ){
		Message("Problems reading the record");
		return;
	}
	if(x.Status == '*'){
		Message("Erased records cannot be modified");
		return;
	}

	printf("\n\nCurrent Data\n\n");
	Print_Person(x);
	printf("\n\nNew Data\n\n");
	Read_Person(&x);

	// Rewind one record in the file
	fseek(fp, -(long) sizeof(PERSON), SEEK_CUR);

	// Rewrite the registry
	fwrite(&x, sizeof(PERSON), 1, fp);
	fflush(fp); // ? Dump the data in the hard drive
}

void Erase_Person(){
	PERSON x;
	long int record_num;
	char answer;

	printf("Enter the record number [# between 1 and n]: ");
	scanf("%ld", &record_num);
	fflush(stdin);

	if( fseek(fp, (record_num - 1) * sizeof(PERSON), SEEK_SET) != 0 ){
		Message("Non-existent record!");
		return;
	}
	if( fread(&x, sizeof(PERSON), 1, fp) != 1 ){
		Message("Problems reading the record");
		return;
	}
	if(x.Status == '*'){
		Message("This record has already been erased!\n\n");
		return;
	}

	printf("\n\nCurrent Data\n\n");
	Print_Person(x);
	printf("\n\nErase the record (y/n)?: ");
	// answer = getchar();
	scanf("%s", &answer);
	fflush(stdin);

	if(toupper(answer) != 'Y') 
		return;

	x.Status = '*';
	// Rewind one record in the file
	fseek(fp, -(long) sizeof(PERSON), SEEK_CUR);

	// Rewrite the registry
	fwrite(&x, sizeof(PERSON), 1, fp);
	fflush(fp); // ? Dump the data in the hard drive
}

void Print_Records(){
	long int Line_N = 0;
	PERSON reg;

	rewind(fp);
	while(1){
		if( fread(&reg, sizeof(reg), 1, fp) != 1 ) break;

		// if record has been erased, don't show it
		if(reg.Status == '*') continue;

		Print_Person(reg);
		Line_N++;

		if(Line_N % 20 == 0)
			Message("\n----------------------------------------------------------------\n");
	}

	Message("\n----------------------------------------------------------------\n");
}

void Search_Age_Range(int ini, int end){
	PERSON reg;

	rewind(fp);
	while(fread(&reg, sizeof(PERSON), 1, fp))
		if(reg.Status != '*' && reg.Age >= ini && reg.Age <= end)
			Print_Person(reg);

	Message("\n\n----------------------------------------------------------------\n");
}

void Search_Name(char *s){
	PERSON reg;

	rewind(fp);
	while(fread(&reg, sizeof(PERSON), 1, fp))
		if(reg.Status != '*' && strstr(reg.Name, s))
			Print_Person(reg);

	Message("\n\n----------------------------------------------------------------\n");
}

