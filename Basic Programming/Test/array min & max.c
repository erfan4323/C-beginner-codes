#include <stdio.h>
#include <conio.h>
#define MAX_SIZE 100
int main() {
int num[MAX_SIZE],size,max, min;
printf("Please enter your array size: ");
scanf("%d",&size);
printf("Please enter your array value: ");
max,min = num[0];
for(int i = 0; i<size; i++){
	scanf("%d",&num[i]);
}
for(int k = 0; k<size; k++){
 if(num[k]>max){
 	max= num[k];
	}
	if(num[k]<min){
		min= num[k];
 }
}

printf("second min is: %d and second max is: %d",min,max);
return 0;
}