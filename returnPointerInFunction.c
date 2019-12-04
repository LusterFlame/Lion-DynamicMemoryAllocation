#include <stdio.h>
#include <stdlib.h>

int* returnIntPointerNormal(int value);
int* returnIntPointerMalloc(int value);

int main(){
	// Assigning pointer via function
	int* a = returnIntPointerMalloc(4);
	printf("returnIntPointerMalloc() Success. *a = %d\n", *a);
	int* b = returnIntPointerNormal(2);
	printf("returnIntPointerNormal() Success. *b = %d\n", *b);

	return 0;
}

// Return a pointer for local variable
int* returnIntPointerNormal(int value){
	int temp = value;
	return &temp;
}

// Return a pointer for local "malloced" variable
int* returnIntPointerMalloc(int value){
	int* temp = (int*) malloc(sizeof(int));
	*temp = value;
	return temp;
}