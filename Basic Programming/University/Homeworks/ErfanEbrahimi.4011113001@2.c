#include<stdio.h>
#include<conio.h>
int main(){
	int n,i=1,j,k;
	scanf("%d",&n);
	
	while(n>=i){
		j=(n/2)-1;
		k=n;
		
		while(k>=i){
			printf(" ");
			k--;	
		}
		
		while(j>=0){
		 printf("*");
			j--;
		}
		
		i++;
		printf("\n");
	}
	
	return 0;
}