/* STATIC LIST */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX 10

typedef struct{
	unsigned int N;
	char Name[40 + 1];
} RECORD;

typedef struct{
	RECORD  v[MAX];
	int Count;
} LIST;

void Initialize(LIST *ptr);
int Is_Full(LIST L);
int Insert(LIST *ptr, RECORD r);
int Save(LIST L, char *File_Name);
int Load(LIST L, FILE *fp);
void Print_List(LIST L);

int main(int argc, char *argv[]){
	int i;
	LIST List;

	RECORD R = {100, "David"};

	Initialize(&List);

	for(i = 0; i <= MAX; i++)
		R.N = Insert(&List, R);

	Print_List(List);
	
	return 0;
}

void Initialize(LIST *ptr){
	ptr->Count = 0;
}

int Is_Full(LIST L){
	return L.Count == MAX;
}

int Insert(LIST *ptr, RECORD r){
	if(Is_Full(*ptr))
		return -1;
	ptr->v[ptr->Count] = r;
	return ptr->Count++;
}

int Save(LIST L, char *File_Name){
	FILE *fp = fopen(File_Name, "wb");
	if(fp == NULL) return 0;
	if( fwrite(L.v, sizeof(RECORD), L.Count, fp) != L.Count) return 0;
	fclose(fp);
	return 0;
}

/*
// Another way of saving the list
int Save(LIST L, char *File_Name){
	int i;
	FILE *fp = fopen(File_Name, "wb");
	if(fp == NULL) return 0;

	for(i = 0; i < L.count; i++)
		if( fwrite(&L.v[i], sizeof(RECORD), 1, fp) != 1) return 0;
	fclose(fp);
	return 0;
}
*/

int Load(LIST L, FILE *fp){
	RECORD R;
	rewind(fp);
	while( fread(&R, sizeof(R), 1, fp) == 1 )
		if(Insert(&L, R) == -1) return -1; // list is full
	return 0;
}

void Print_List(LIST L){
	int i;
	for(i = 0; i < L.Count; i++)
		printf("%d %s\n", L.v[i].N, L.v[i].Name);
}


