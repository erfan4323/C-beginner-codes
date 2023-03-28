#include<stdio.h>
#include<string.h>
//defining values
#define I 1
#define IV 4
#define V 5
#define IX 9
#define X 10
#define XL 40
#define L 50
#define XC 90
#define C 100
#define CD 400
#define D 500
#define CM 900
#define M 1000
//final rsult
int sum=0;
//calling function
void romantoint(char roman[]);

int main(){
	char roman[10];
	printf("Enter the Roman number:\n ");
	gets(roman);
	romantoint(roman);
	printf("integer:\n%d",sum);
}
void romantoint(char roman[]){
		for(int i=0; i<strlen(roman); i++){
			if(roman[i]=='I' && roman[i+1]=='V'){
				sum += IV;
				sum -= V;
				i++;
			}
			if(roman[i]=='I' && roman[i+1]=='X'){
				sum += IX;
				sum -= X;
				i++;
			}
			if(roman[i]=='X' && roman[i+1]=='L'){
				sum += XL;
				sum -= L;
				i++;
			}
			if(roman[i]=='X' && roman[i+1]=='C'){
				sum += XC;
				sum -= C;
				i++;
			}
			if(roman[i]=='C' && roman[i+1]=='D'){
				sum += CD;
				sum -= D;
				i++;
			}
			if(roman[i]=='C' && roman[i+1]=='M'){
				sum += CM;
				sum -= M;
				i++;
			}
			if(roman[i]=='I'){
				sum += I;
			}
			if(roman[i]=='V'){
				sum += V;
			}
			if(roman[i]=='X'){
				sum += X;
			}
			if(roman[i]=='L'){
				sum += L;
			}
			if(roman[i]=='C'){
				sum += C;
			}
			if(roman[i]=='D'){
				sum += D;
			}
			if(roman[i]=='M'){
				sum += M;
			}
		}
}