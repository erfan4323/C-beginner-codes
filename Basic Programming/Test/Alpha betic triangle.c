#include<stdio.h>
int main(){
	int number;
	char alphabet,temp;
	scanf("%c",&alphabet);
	number = alphabet;
	if(number>=65 && number<=90){
	 for(int i=1; i<=25; i++){
	 	for(int j=0; j<=i; j++){
	 		printf("%c",number);
			}
	 	number++;
			printf("\n");
			if(number==91){
				break;
			}
		}
	}else if(number>=97 && number<=122){
	 for(int i=1; i<=25; i++){
	 	for(int j=0; j<=i; j++){
	 		printf("%c",number);
			}
	 	number++;
			printf("\n");
			if(number==123){
				break;
			}
		}
	}else{
		printf("The entered value is not valid.");
	}
}