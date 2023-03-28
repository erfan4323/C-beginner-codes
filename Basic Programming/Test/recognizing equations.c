#include<stdio.h>
#include<string.h>
#define max 99

void detectchar(char det[]);
void delrep(char rep[]);
void add_sub(char arr[], int arr_v[]);
void div_mult(char arr[], int arr_v[]);

char operand[26],equation[50];
int operand_value[26],equation_value[50];

int main(){
	
	printf("enter your equation: ");
	scanf("%s",equation);
	detectchar(equation);
	
	for(int i=0; i<strlen(operand) ; i++){
		printf("the value of %c is: ",operand[i]);
		scanf("%d",&operand_value[i]);
	}
	
	for(int i=0; equation[i] != '\0'; i++){
		for(int j=0; j<strlen(operand); j++){
			if(equation[i] == operand[j]){
				equation_value[i] = operand_value[j];
			}
			if(equation[i]=='+'||equation[i]=='-'||equation[i]=='*'||equation[i]=='/'){
				equation_value[i]=max;
			}
		}
	}
	
	for(int i=0; i<strlen(equation); i++){
	 div_mult(equation,equation_value);
	}
	
}

void detectchar(char det[]){
	int det_len = strlen(det),k,flag;
	
	for(int i=0; i<det_len; i++){
	  if(det[i] >= 'a' && det[i] <= 'z'){
	   for(k = i; det[k] != '\0'; k++){
					operand[k] = det[i];
				}
			}
		}
		
	delrep(operand);
}

void delrep(char rep[]){
	int rep_len = strlen(rep),i;
	
	for(i=0; i<rep_len; i++){
		for(int j=i+1; rep[j] != '\0'; j++){
	  if(rep[i]==rep[j]){
	   for(int k = j; rep[k] != '\0'; k++){
					rep[k] = rep[k + 1];
				}
			}
		}
 }
 
}

void div_mult(char arr[], int arr_v[]){
	int lenth =strlen(arr),pre,next,result,j;
	
 for(int i=0; i<lenth; i++){
 	if(arr[i] == '/'){
 		pre = arr_v[i-1];
 		next = arr_v[i+1];
 		result = pre/next;
 		arr_v[i-1] = result;
 		arr[i-1]='z';
 		
 		for(j=0; j<lenth-2; j++){
 			arr_v[j]=arr_v[j+2];
 			arr[j]=arr[j+2];
			}
			
			arr_v[j]='\0';
			arr[j]='\0';
			i--;
		}else if(arr[i] == '*'){
			pre = arr_v[i-1];
 		next = arr_v[i+1];
 		result = pre*next;
 		arr_v[i-1] = result;
 		arr[i-1]='z';
 		
 		for(j=0; j<lenth-2; j++){
 			arr_v[j]=arr_v[j+2];
 			arr[j]=arr[j+2];
			}
			
			arr_v[j]='\0';
			arr[j]='\0';
			i--;
		}
	}	
	add_sub(arr,arr_v);
}

void add_sub(char arr[], int arr_v[]){
	int lenth =strlen(arr),pre,next,result,j;
	
 for(int i=0; i<lenth; i++){
 	if(arr[i] == '+'){
 		pre = arr_v[i-1];
 		next = arr_v[i+1];
 		result = pre+next;
 		arr_v[i-1] = result;
 		arr[i-1]='z';
 		
 		for(j=0; j<lenth-2; j++){
 			arr_v[j]=arr_v[j+2];
 			arr[j]=arr[j+2];
			}
			
			arr_v[j]='\0';
			arr[j]='\0';
			i--;
		}else if(arr[i] == '-'){
			pre = arr_v[i-1];
 		next = arr_v[i+1];
 		result = pre-next;
 		arr_v[i-1] = result;
 		arr[i-1]='z';
 		
 		for(j=0; j<lenth-2; j++){
 			arr_v[j]=arr_v[j+2];
 			arr[j]=arr[j+2];
			}
			
			arr_v[j]='\0';
			arr[j]='\0';
			i--;
		}
	}	
	printf("your equation answer is: %d",arr_v[0]);
}
