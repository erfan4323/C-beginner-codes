#include<stdio.h>
#include<string.h>
void capital(char name[]);
int main(){
	char name[20];
	printf("Enter the text: ");
	gets(name);
	capital(name);
	printf("Changed Text: ");
	puts(name);	
}
void capital(char name[]){
	for(int i=0; name[i] != '\0'; i++){
		if(name[i]>='A' && name[i]<='Z'){
			name[i] += 32;
		}else if(name[i]>='a' && name[i]<='z'){
			name[i] -= 32;
		}else{
			continue;
		}
	}
}