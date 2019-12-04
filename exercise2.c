#include <stdio.h>
#include <stdlib.h>

#define USAGE_ERR ("Usage: ./exercise [int arg0 (>0)] [int arg1 (>0)]\n")
#define MALLOC_FAIL ("Memory allocation failed.\n")
#define LENGTH 100000000

int main(int argc, char* argv[]){
	// Checking input format
	if(argc != 3){
		puts(USAGE_ERR);
		exit(-1);
	}

	// Allocating memory
	int* arr = malloc(sizeof(int) * LENGTH);
	if(!arr){
		// Exit if memory allocation failed
		puts(MALLOC_FAIL);
		exit(-2);
	}

	// Assign initial value
	arr[0] = atoi(argv[1]);
	arr[1] = atoi(argv[2]);

	// Check if initial value follow the rule (>0)
	if(arr[0] * arr[1]  <= 0){
		puts(USAGE_ERR);
		exit(-1);
	}

	// Calculate the rest
	for(int i = 2;i < LENGTH;++i){
		arr[i] = (arr[i - 1] + arr[i - 2]) % 10;
	}
	// Print the result
	printf("arr[99999999] = %d\n", arr[99999999]);

	return 0;
}