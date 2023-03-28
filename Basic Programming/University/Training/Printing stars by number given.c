#include<stdio.h>
#include<conio.h>
int main(){
 int n,i=0,j;
 scanf("%d",&n);
 
 /*
	*
	**
	***
	****
	*****
	n=5
	*/
	
	while(n>=i){
		j=i+1;
		while(j>=1){
			
			printf(" * ");
			j--;
			
		}
		i++;
		printf("\n");
	}
 
 i=0;
 
/*
*****
****
***
**
*
n=5
*/

 while(n>=i){
 
 
 	j=n-i;
 	
 	while(j>=1){
 		
 		printf(" * ");
 		j--;
		}
 
 	i++;
 	printf("\n");

 }
 return 0 ;
}


