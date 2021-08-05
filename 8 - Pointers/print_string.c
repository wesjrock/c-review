#include <stdio.h>

// Print string by passing its base address as reference
void Print(const char *C);

int main(){
	//char C[20] = "Hello"; // string gets stored in the space for array
	char *C = "Hello"; 		// string gets stored as compile time constant
	Print(C);

	return 0;
}

void Print(const char *C){	// const means it cannot be modified for writing
	while(*C != '\0'){
		printf("%c", *C);	// value at address
		C++; 				// increment address
	}
	printf("\n");
}