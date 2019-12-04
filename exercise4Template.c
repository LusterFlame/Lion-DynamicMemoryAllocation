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
		printf("(A)dd element / (S)et element / (G)et element / (P)rint all element / (Q)uit\n");

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
				break;
			case 'G':
			case 'g':
				printf("Which index to get? ");
				scanf("%ld", &index);
				printf("Value at index %ld = %d.\n", index, getElement(index));
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
				break;
		}
		CLEAR_LINE;
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
	
	printf("Printing array. Array Size = %ld.", arraySize);
	/*
		WRITE YOUR CODE HERE.
		Simply print the whole array out.
	*/

	return;
}


int addElement(int element){
	
	/*
		WRITE YOUR CODE HERE.
		Resize the array and add the element into the newly allocated space.
		If success, return true(1), 
		else return false(0).

		You can ignore the possibility of overflowing.
		Or detect it via any your own approach for exercising.

		Remember to inform the user if the reallocation failed.
	*/

	return true;
}

int setElement(size_t index, int element){

	/*
		WRITE YOUR CODE HERE.
		Set array[index] into `element`.
		If success, return true(1), 
		else return false(0).

		Remember to inform the user the error (e.g., index out of bound).
	*/

	return true;
}

int getElement(size_t index){

	int target = INT_MIN;
	/*
		WRITE YOUR CODE HERE.
		get the value at array[index] and return.

		Remember to inform the user the error (e.g., index out of bound).
	*/

	return target;
}