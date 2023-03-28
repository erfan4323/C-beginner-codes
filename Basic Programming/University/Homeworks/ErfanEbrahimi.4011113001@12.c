#include <stdio.h>
#include <string.h>
int main(){
	char sntnc[100],tkn[]=".",*sprd;
	printf("add your sentence: ");
	scanf("%s",&sntnc);
	sprd= strtok(sntnc,tkn);
	printf("your words should be:\n\n");
	while(sprd != NULL){
		printf("   %s\n\n",sprd);
		sprd= strtok(NULL,tkn);
	}
}