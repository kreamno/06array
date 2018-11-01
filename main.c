#include <stdio.h>
#include <stdlib.h>
#define ROWS	3
#define COLS	3

void printMatrix(int A[][COLS])		//앞에 []에는 ROWS 써도 되고 안 써도 됨 
{
	int i, j;
	
	for (i=0; i<ROWS; i++) {
		for (j=0; j<COLS; j++) {
			printf("%d", A[i][j]);
		}
		
		printf("\n");
	}
	
	return;		//void를 하면 return 뒤에 수 붙이면 안 됨. 
}


int addMatrix (int A[][COLS], int B[][COLS], int C[][COLS]) 
{
	int i, j;
	
	for (i=0; i<ROWS; i++) {
		for (j=0; j<COLS; j++) {
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	return 1;
}


int main(int argc, char *argv[]) {
	
	int A[ROWS][COLS]={			//더하기 대상 행렬 
		{2,3,0},
		{8,9,1},
		{7,0,5}
		};
	int B[ROWS][COLS]={			//더하기 대상 행렬 
		{1,0,0},
		{0,1,0},
		{0,0,1}
		};
	int C[ROWS][COLS];			//덧셈 결과 행렬 
	
	
	addMatrix(A, B, C);
	printMatrix(C);
			
	return 0;
}
