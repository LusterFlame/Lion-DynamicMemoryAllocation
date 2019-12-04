#include <stdio.h>
#include <stdlib.h>
#include <limits.h>		// For INT_MIN, the smallest possible value of int.

#define true 1
#define false 0
#define CLEAR_LINE ({char dump;do{dump = getchar();}while(dump != '\n' && dump != EOF);})

// Completed function.
void clearLine();

// Funtion needed implement
void printArray();
int addElement(int element);
int setElement(size_t index, int element);
int getElement(size_t index);

int* array = NULL;			// The array.
size_t arraySize = 0;		// To keep track of the size of array.

int main(){
	size_t index;
	int inputInt;
	char command;

	while(true){
		printf("==========================================\n");
		printf("Current array size = %ld\n", arraySize);
		printf("What do you want to do?\n");
		printf("(A)dd element / (S)et element / (G)et element / (P)rint all element / (Q)uit: ");

		scanf("%c", &command);
		CLEAR_LINE;
		switch(command){
			case 'A':
			case 'a':
				printf("Enter the value you want to add to the array: ");
				scanf("%d", &inputInt);
				if(!addElement(inputInt)){
					printf("Add failed.\n");
				}
				CLEAR_LINE;
				break;
			case 'S':
			case 's':
				printf("Where do you want to set? ");
				scanf("%ld", &index);
				printf("Which value to change into?");
				scanf("%d", &inputInt);
				if(!setElement(index, inputInt)){
					printf("Set failed.\n");
				} 
				CLEAR_LINE;
				break;
			case 'G':
			case 'g':
				printf("Which index to get? ");
				scanf("%ld", &index);
				printf("Value at index %ld = %d.\n", index, getElement(index));
				CLEAR_LINE;
				break;
			case 'P':
			case 'p':
				printArray();
				break;
			case 'Q':
			case 'q':
				return 0;
			case '\n':
			case EOF:
				printf("God damn, please type something.\n");
				break;
			default:
				printf("Unknown command.\n");
				CLEAR_LINE;
				break;
		}
	}

	return 0;
}


// Clear all unused input.
void clearLine(){
	char dump;
	do{
		dump = getchar();
	}while(dump != '\n' && dump != EOF);
}

// Print out the whole array.
void printArray(){
	
	printf("Printing array. Array Size = %ld.\n", arraySize);
	for(size_t temp = 0;temp < arraySize;++temp){
		printf("Array Entry #%4ld = %d\n", temp, array[temp]);
	}

	return;
}


int addElement(int element){
	
	int* temp;
	if((temp = realloc(array, sizeof(int) * (arraySize + 1))) == NULL){
		printf("Realloc failed.\n");
		return false;
	}
	else{
		array = temp;
	}

	array[arraySize] = element;
	++arraySize;

	return true;
}

int setElement(size_t index, int element){

	if(index >= arraySize){
		printf("Index out of bound.\n");
		return false;
	}

	array[index] = element;

	return true;
}

int getElement(size_t index){

	int target = INT_MIN;
	if(index >= arraySize){
		printf("Index out of bound.\n");
		return target;
	}

	target = array[index];

	return target;
}