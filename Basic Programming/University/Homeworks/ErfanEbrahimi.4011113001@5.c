#include<stdio.h>
#include<conio.h>
int main(){
int num[10],cnum;
printf("please add the values: ");

for (int i=0;i<10;i++){
	scanf("%d",&num[i]);
}

printf("please add your number to check: ");
scanf("%d",&cnum);
bool found = false;

for(int j=0;j<10;j++){
 	if(num[j]==cnum){
 		found = true;
 		break;
		}
}

if(found==true){
	printf("your number is in the values");
}else{
	printf("your number is not in the values");
}

	return 0;
}