#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char* ptr, *temp;

	// Claim the initial space for ptr,
	// Exit if retured NULL (failed)
	if((ptr = malloc(sizeof(char) * 10)) == NULL){
		printf("Malloc failed.\n");
		exit(-1);
	}

	// Set the string in ptr
	strcpy(ptr, "nine char");
	printf("str = %s, addr = %p\n", ptr, ptr);

	// Reallocate size from 10 to 200,
	// exit if returned NULL (failed)
	if((temp = realloc(ptr, 200)) == NULL){
		printf("Realloc failed.");
		exit(-2);
	}
	else{
		//ptr = temp;
		printf("vng ptr = %s", ptr);
	}

	printf("str = %s, addr = %p\n", ptr, ptr);

	return 0;
}