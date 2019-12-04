#include <stdio.h>
#include <stdlib.h>

int main(){

	int* ptr;
	ptr = (int*) malloc(sizeof(int));

	printf("ptr now holds %d\n", *ptr);

	*ptr = 42;
	printf("ptr now holds %d\n", *ptr);

	return 0;
}