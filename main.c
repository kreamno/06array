#include <stdio.h>
#include <stdlib.h>
#define NUMB 5

int main(int argc, char *argv[]) {
	
	int i;
	int arr[NUMB];
	printf("input 5 numbers: ");
	
	for(i=0; i<NUMB; i++){
	scanf("%d", &arr[i]);
	}
	
	//3.sorting
	for(i=0; i<NUMB; i++){
	
	printf("%d ", arr[i]);
	}
	return 0;
}
