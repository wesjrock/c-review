#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	int v[5] = {10, 20, 30, 40, 50};
	int i;
	int *pv;
	int **ppv;

	pv = v; 							// or pv = &v[0];
	ppv = &pv;

	// item a)
	/*
	for(i = 0; i < 5; i++){
		//printf("%d\n", *(pv++) ); 	// or pv[i]

		printf("%d\n", **ppv ); 		// ppv is pointing to &pv
		pv++;							// incrementing pv address so ppv can follow it
	}	
	*/


	// item c)

	// MY ANSWER (gives the output but answer isn't 100% correct)
	/*
	// output: 10 10 10							
	printf("%d %d %d\n", v[0], pv[0], **ppv); 

	// output: 20 20 20							
	pv++;
	printf("%d %d %d\n", v[1], pv[0], **ppv); 

	// output: 30 40 50							
	pv+=2;
	printf("%d %d ", v[2], pv[0]);
	pv++;
	printf("%d\n", **ppv);

	// output: 9 19 29
	v[0] -= 1;
	v[1] -= 1;
	v[2] -= 1;
	pv-=3;
	printf("%d %d ", v[0], pv[0]);
	pv++;
	printf("%d\n", **ppv);
	*/

	// BOOK ANSWER:
	
	printf("%d %d %d\n", v[0], 	 *pv, 	        **ppv );
	printf("%d %d %d\n", v[1],   *(pv + 1),     *(*ppv + 1) );
	printf("%d %d %d\n", v[2], 	 pv[3], 	    (*ppv)[4] );
	printf("%d %d %d\n", *v - 1, *(pv + 1) - 1, *(*ppv + 2) - 1 );

	return 0;
}

