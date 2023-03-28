#include<stdio.h>
#include<conio.h>
int main(){
	
int i,n,sum;

printf("please enter the number: ");

for(scanf("%d",&n);n!=0;n/=10){
	i=n%10;
	sum += i;
}

printf("%d",sum);

	return 0;
}