#include<stdio.h>
#include<conio.h>
int main(){
	
int num,i,count;

for(num=1000;num<10000;num++){
	count=0;
	for(i=2;i<=num/2;i++){
		if(num%i==0){
	  count++;
	  break;
		}
	}
 if(count==0){
		 printf("%d\n",num);
 }
}
	return 0;
}