#include <stdio.h>
#include <stdlib.h>

int main(){

	void* ptr = NULL;
	size_t size = 1, success;

	while(1){
		ptr = malloc(size);
		if(ptr == NULL){
			break;
		}
		else{
			success = size;
			size *= 2;
		}
	}

	printf("Largest successful allocation at size = %ld\n", success);
	return 0;
}