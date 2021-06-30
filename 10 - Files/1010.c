#include <stdlib.h>
#include <stdio.h>

/*	Enter 10 decimal values and write it out to a file, then choose a number between 1 and 10
    and show the nth and first and last entered values */
int main(int argc, char *argv[]){
	FILE *fp;
	int i, n;
	float v[n], x;

	for(i = 0; i < 10; i++){
		printf("Enter the %d-th decimal value: ", i + 1);
		scanf("%f", &v[i]);
	}

	if( (fp = fopen("NUMBERS.DAT", "w+b")) == NULL ){
		printf("Impossible to create file %s\n", "NUMBERS.DAT");
		exit(1);
	}

	if( fwrite(v, sizeof(float), 10, fp) != 10 )
		printf("Not all elements were written!\n");

	printf("Choose a number between 1 and 10 to show the previously entered numbers: ");
	scanf("%d", &n);

	// Show the n-th value
	/* fseek is starting at SEEK_SET which is the beginning of the file and
	   is moving (n - 1) elements forward */
	fseek(fp, (long) (n - 1) * sizeof(float), SEEK_SET);
	fread(&x, sizeof(float), 1, fp);
	printf("The %d-th value was %f\n", n, x);

	// Show the first entered value
	rewind(fp);
	fread(&x, sizeof(float), 1, fp);
	printf("The 1st entered value was %f\n", x);

	// Show the last entered value
	/* fseek is starting at SEEK_END which is the end of the file and
	   is moving -1 element backwards */
	fseek(fp, -(long) sizeof(float), SEEK_END);
	fread(&x, sizeof(float), 1, fp);
	printf("The last entered value was %f\n", x);

	fclose(fp);

	return 0;
}
