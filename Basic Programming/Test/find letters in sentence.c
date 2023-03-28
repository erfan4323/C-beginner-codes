#include<stdio.h>
#include<string.h>

char the_word [30][10];
int count;

void srchtxt(char search[10], char text[256]);
bool cmptxt(char str[10],char txt[256]);

int main(){
	char txt[256], srch[10];
	
	printf("Please add your text: ");
	gets(txt);
	printf("\nPlease add your word to search: ");
	gets(srch);
	srchtxt(srch,txt);
	
	for(int i=0; i<count; i++){
		printf("%s\n",the_word[i]);
	}
	
}

bool cmptxt(char str[10],char txt[256]){
	int pos=0,npos=0,count=0;
	
	while(txt[pos] != '\0'){
		
	 if(txt[pos] == str[npos]){
		 npos++;
		 count++;
		 pos=-1;
		 if(count == strlen(str)){
    		return 1;
		 }
	 }
		pos++;
		
		if(pos == strlen(txt) && count != strlen(str)){
			return 0;
		}
	}
}

void srchtxt(char search[10], char text[256]){	
	char* token = strtok(text," ");
	int i=0;
	while(token){
		
		if(cmptxt(search,token)){
			strcpy(the_word[i],token);
			count++;
			i++;
		}
		
	 token = strtok(NULL," ");
	}
	
}