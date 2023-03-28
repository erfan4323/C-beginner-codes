#include <stdio.h>
#include <string.h>
int main(){
 char str1[20],str2[20];
 printf("please add your words: ");
 scanf("%s%s",str1,str2);
 if(strcmp(str1,str2)==0){
 	printf("the value is 0");
	}if(strcmp(str1,str2)>0){
		printf("the value is -1");
	}else{
		printf("the value is 1");
	}
}