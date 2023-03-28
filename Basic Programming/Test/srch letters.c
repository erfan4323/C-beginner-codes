#include <stdio.h>
#include <string.h>

void cmptxt(char str[10],char txt[256]){
	int pos=0,npos=0,count=0;
	
	while(txt[pos] != '\0'){
		
	 if(txt[pos] == str[npos]){
		 npos++;
		 count++;
		 pos=-1;
		 if(count == strlen(str)){
    printf("%s is present in the string",str);
			}
		}
		pos++;
		
		if(pos == strlen(txt) && count != strlen(str)){
			printf("%s is not present in the string",str);
		}
	}
}
int main() {
	
	char str[100];	
	char txt[100];	
	
	printf("Enter String: ");
	gets(txt);
	printf("Enter Word to Search in the String: ");
	gets(str);
	
	cmptxt(str,txt);
	
}
