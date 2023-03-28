#include<stdio.h>
#include<conio.h>
int main (){
	
	int n,i=0,j,k;
	
	scanf("%d",&n);
	
	while (n>=i){
		j=n-i;
		k=n-i;
		
		while(k<=n-1){
		 printf(" ");
			k++;
		}
		
		while(j>=1){
			printf("*");
			j--;
		}
	
		i++;
		printf("\n");
	}
	return 0;
}