#include<stdio.h>
int* multipoint(int* num1, int* num2, int* sum){
	*sum = *num1 * *num2;
	return sum;
}
int main(){
	int num1=10,num2=2,sum;
	multipoint(&num1, &num2, &sum);
	printf("%d",sum);
}