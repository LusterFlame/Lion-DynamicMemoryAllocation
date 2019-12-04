#include <stdio.h>
#include <stdlib.h>

void mallocMB(int n){

	// Get 1048576 (2^20) bytes
	// Recall: sizeof(char) == 1
	char* space = malloc((1 << 20) * sizeof(char));

	printf("#%d Iteration: Success\n", n);
	mallocMB(++n);
	return;
}

int main(){

	// Start the recursion
	mallocMB(1);
	
	return 0;
}