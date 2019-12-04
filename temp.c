#include <stdio.h>
#include <stdlib.h>

int main(){

	int* ptr;
	// Cast void* to int*, let ptr get memory
	ptr = malloc(sizeof(int));

	printf("ptr now holds %d\n", *ptr);

	// Assign value to ptr
	*ptr = 42;
	printf("ptr now holds %d\n", *ptr);

	return 0;
}