#include<stdio.h>
#include<conio.h>
int main(){
int num[10],cnum;
printf("please add 10 values: ");
for (int i=0;i<10;i++){
	scanf("%d",&num[i]);
}
for(int j=0;j<10;j++){
	for(int k = j+1;k<10;k++){
		int temp;
	 if(num[j]<num[k]){
		 temp=num[k];
		 num[k]=num[j];
		 num[j]=temp;
	 }
	}
}
for (int k=0;k<10;k++){
	printf("%d",num[k]);
}
	return 0;
}