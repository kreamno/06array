void printMatrix(int A[][COLS])		//앞에 []에는 ROWS 써도 되고 안 써도 됨 
{
	int i, j;
	
	for (i=0; i<ROWS; i++) {
		for (j=0; j<COLS; j++) {
			printf("%d ", A[i][j]);
		}
		
		printf(" \n");
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
