#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void *my_calloc(size_t num, size_t size);

int main(int argc, char *argv[]){
	int i;
	int *array;
	int n_of_elements = 10;

	array = (int*)my_calloc(n_of_elements, sizeof(int));
	if(array == NULL)
		printf("Memory could not be allocated\n");
	else
		for(i = 0; i < n_of_elements; i++)
			printf("array[%d] = %d\n", i, array[i]);

	free(array);
	
	return 0;
}

void *my_calloc(size_t num, size_t size){
	void *tmp;

	tmp = malloc(num * size);
	if(tmp != NULL)
		memset(tmp, '\0', num * size);

	return tmp;
}
