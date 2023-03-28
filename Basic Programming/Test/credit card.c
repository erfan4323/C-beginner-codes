#include <stdio.h>
#include <stdlib.h>
typedef struct CreditCard{
	int id;
	int cvv2;
	int Emonth;
	int Eyear;
	int credit;
}card;
int main(){
	card c1,c2;
 printf("First account:\nID: ");
 scanf("%d",&c1.id);
 printf("CVV2: ");
 scanf("%d",&c1.cvv2);
 printf("Expiration month: ");
 scanf("%d",&c1.Emonth);
	printf("Expiration year: ");
 scanf("%d",&c1.Eyear);
 printf("Credit: ");
 scanf("%d",&c1.credit);
 printf("Second account:\nID: ");
 scanf("%d",&c1.id);
 printf("CVV2: ");
 scanf("%d",&c2.cvv2);
 printf("Expiration month: ");
 scanf("%d",&c2.Emonth);
	printf("Expiration year: ");
 scanf("%d",&c2.Eyear);
 printf("Credit: ");
 scanf("%d",&c2.credit);
 _sleep(3000);
 system("cls");
 int sum = c1.credit+c2.credit;
 printf("Second account's credit: %d",sum);
}