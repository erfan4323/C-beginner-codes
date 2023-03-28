#include<stdio.h>
#include<string.h>

char word[10][20];

void palindrome(char name[]);
bool checkpalindrome(char s[]);

int main(){
	
	char plchar[256];
	
	printf("enter the text:\n");
	gets(plchar);
	
	palindrome(plchar);
	
}

void palindrome(char name[]){
	char* token = strtok(name, " ");
	while(token){
		
		if(checkpalindrome(token)){
			printf("%s\n", token);
		}
		
		token = strtok(name, NULL);
	} 
}

bool checkpalindrome(char s[]){
    char rs[strlen(s)];
    strcpy(rs,s);
    strrev(rs);
    if(strcmp(rs,s)){
    	return true;
	}else{
		return false;
	}
 }