#include<stdio.h>
#include<string.h>
struct data{
	char dname;
	int dvalue;
}op[10];
void scantxt(char str[]);
int main(){
	int i=0;
	char sctxt[10];
	struct data op[10] = {0};
	printf("enter your text to scan: \n");
	gets(sctxt);
	scantxt(sctxt);
	int sctxt_len = strlen(sctxt);
	for(int j=0; j<sctxt_len; j++){
		printf("\nthe Alphabet of %s is %s!\n",sctxt,op[j].dname);
	}
}

void scantxt(char str[]){
	struct data op[10] = {0};
	int str_len = strlen(str);
	for(int i=0; i<str_len; i++){
		if(str[i]<'a' && str[i]>'z'){
			continue;
		}else{
			op[i].dname=str[i];
		}
	}
}