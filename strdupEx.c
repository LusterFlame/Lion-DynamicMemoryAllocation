#include <stdio.h>
#include <stdlib.h>
#include "myStrdup.h"

int main(){
	// Declair string and duplicate
	char* original = "The ORIGINAL string";
	char* new = myStrdup(original);

	// Exit if duplication failed.
	if(new == NULL){
		printf("Memory allocation failed.\n");
		exit(-1);
	}

	// Print the strings
	printf("Original String: \"%s\"\n", original);
	printf("Copied   String: \"%s\"\n", new);

	// Change "the" int "not" in the duplicate string
	new[0] = 'N';
	new[1] = 'o';
	new[2] = 't';
	printf("Copied   String: \"%s\"\n", new);
	
	return 0;
}