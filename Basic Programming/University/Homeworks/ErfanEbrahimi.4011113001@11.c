#include <stdio.h>
#include <string.h>
int main(){
	char fname[20],lname[20];
	printf("please enter your first name:");
	scanf("%s",&fname);
	printf("please enter your last name:");
	scanf("%s",&lname);
	strcat(fname,lname);
	printf("So your name should be %s",fname);
}