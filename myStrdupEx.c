#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* myStrdup(const char* original){
	// Create space for the new string to return.
	// +1 is for the terminate charcter ('\0').
	char *newStr = malloc(strlen(original) + 1);

	// Check if malloc() succeed
	if(!newStr){
		return NULL;
	}

	// Copy the thing in s into newStr
	strcpy(newStr, original);

	return newStr;
}

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