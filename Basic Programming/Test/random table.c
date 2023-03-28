#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void randomtbl(int row,int column);
int main(){
	int r,c;
	printf("rows: ");
	scanf("%d",&r);
	printf("columns: ");
	scanf("%d",&c);
	if(c>10 || r>10){
		exit(1);
	}else{
	 randomtbl(r,c);
	}
}
void randomtbl(int row,int column){
	srand(time(0));
	for(int i=0; i<row; i++){
		for(int j=0; j<column; j++){
	  int number = rand() % 90 + 10;
			printf("%d ",number);
		}
		printf("\n");
	}
}