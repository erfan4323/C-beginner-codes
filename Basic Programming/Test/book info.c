#include <stdio.h>
typedef struct Book{
	int id;
	int price;
	int pages;
}book;
int main(){
	book b1;
	printf("Enter book's id: ");
	scanf("%d",&b1.id);
	printf("\nEnter book's price: ");
	scanf("%d",&b1.price);
	printf("\nEnter book's number of pages: ");
	scanf("%d",&b1.pages);
	printf("\nID: %d\nPrice: %d\nNumber of pages: %d",b1.id,b1.price,b1.pages);
}