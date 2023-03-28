#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void stringToint(char str[]){
 int i=0,num[strlen(str)]={0},num_len=strlen(str);
 for(int i=0; str[i] != '\0'; i++){
  //num[i] = num[i]*10 + (str[i] - 48);
  num[i] = (int) (str[i]-'0');
 }
 for(int i=0; i<num_len; i++)
  printf("%d\n",num[i]);
}

int main(){
	int num[20]={0};
	char str[20];
 gets(str);
 stringToint(str);
}