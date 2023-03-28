#include <stdio.h>

void pangram(char str[]);

struct eng_char{
	char c;
	int value;
};

int main(){
  char str[500];
    printf("enter the text:\n");  
	gets(str);
	for(int i=0;str[i]!='\0';i++){
		if (str[i]>=65 && str[i]<=90){
			str[i]=str[i]+32;
		}
	}
	pangram(str);
}

void pangram(char str[]){
	struct eng_char s[26];
	int sum=0;
    for (int i=0;i<26;i++){
  	 s[i].c= i+'a';
  	 s[i].value=0;
    }
	for (int i=0;str[i]!='\0';i++){
		for (int j=0;j<26;j++){
			if(str[i] == s[j].c){
				s[j].value=1;
			}
		}
	}
	for(int i=0;i<26;i++){
		sum=sum + s[i].value;
	}
	 if(sum==26){
	 	puts("true");
	 }else {
	puts("false");
	}
}
