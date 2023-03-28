#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(0));
	int number,gnumber;
	number =( rand() % 10 )+1;
	printf("%d\n",number);
	printf("Please enter a number: \n");
	scanf("%d",&gnumber);
	do{
		if(gnumber<number){
			printf("Number is higher.\n");
			scanf("%d",&gnumber);
		}else if(gnumber>number){
			printf("Number is lower.\n");
			scanf("%d",&gnumber);
		}else if(gnumber>10 || gnumber<1){
			printf("Please enter a number between 1 and 10.\n");
			scanf("%d",&gnumber);
		}else{
			printf("Correct number.");
			exit(1);
		}
	}while(gnumber != number);
}