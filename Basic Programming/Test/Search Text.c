#include <stdio.h>
#include <string.h>

int srchtxt(char search[10], char text[256]);

int main(){
	
	char txt[256], srch[10];
	
	printf("Please add your text: ");
	gets(txt);
	printf("\nPlease add your word to search: ");
	gets(srch);
	
	if(srchtxt(srch,txt)){
		printf("\nYour word is in the sentence\n");
	}else{
		printf("\nYour word is not in the sentence\n");
	}
	printf("\nPress any thing to continue...");
	getchar();
}


int srchtxt(char search[10], char text[256]){
	char* token = strtok(text," ");
	
	while(token){
		
	 if(strcmp(token,search) == 0){
	 	return 1;
	 }
	 
	 token = strtok(NULL," ");
	}
	
}
//erfan and arefeh went to party last night