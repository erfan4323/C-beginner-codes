#include <stdio.h>
#include <string.h>
int main(){
	char str1[20],a;
 printf("please add your sentence: ");
 scanf("%s",str1);
	printf("please add your character to see how many it repeated: ");
 scanf("%s",a);
 int result= strnum(str1,a);
 printf("the times %s reoeated is %d",a,result);
}