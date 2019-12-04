#include <stdio.h>

void allocMB(int n){

	// Get 1048576 (2^20) bytes
	// Recall: sizeof(char) == 1
	char space[1 << 20];

	printf("#%d Iteration: Success\n", n);
	allocMB(++n);
	return;
}

int main(){

	// Start the recursion
	allocMB(1);
	
	return 0;
}