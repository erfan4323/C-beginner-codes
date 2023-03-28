#include<stdio.h>
#include<stdlib.h>
int main(){
	int matrix[3][3];
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("index[%d][%d]: ",i,j);
			scanf("%d", &matrix[i][j]);
		}
	}
	system("cls");
	printf("Source matrix: \n");
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	printf("\nChanged matrix:\n");
	for(int i=2; i>=0; i--){
		for(int j=0; j<=2; j++){
			printf("%d ", matrix[j][i]);
		}
		printf("\n");
	}
}