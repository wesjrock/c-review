#include <stdlib.h>
#include <stdio.h>

/* Given a file, return the number of float values in it
   in: ./float-count
   out: 10
*/
long Float_Count(FILE *fp);

int main(int argc, char *argv[]){
	FILE *fp;

	if( (fp = fopen("NUMBERS.DAT", "rb")) == NULL ){
		printf("Impossible to open file %s\n", "NUMBERS.DAT");
		exit(1);
	}

	long n_floats = Float_Count(fp);

	printf("%ld\n", n_floats);

	fclose(fp);
	
	return 0;
}

long Float_Count(FILE *fp){
	long n_floats;
	long old_pos = ftell(fp); // save current position, in this case is at the beginning

	fseek(fp, 0L, SEEK_END);
	n_floats = ftell(fp) / sizeof(float); // file size in bytes / float size

	fseek(fp, old_pos, SEEK_SET); // go back to initial position

	return n_floats;
}