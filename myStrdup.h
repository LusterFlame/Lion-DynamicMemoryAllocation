#ifndef SD_H
#define SD_H

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

#endif