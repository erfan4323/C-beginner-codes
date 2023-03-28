#include<stdio.h>
#include<conio.h>
int main(){
char name[50],LastName[50];
printf("please enter your name: ");
scanf("%s",&name);
printf("please enter your last name: ");
scanf("%s",&LastName);
printf("your name is %s\nand your last name is %s",name,LastName);
	return 0;
}