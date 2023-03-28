//C Program to Swap Elements Using Call by Reference
#include<stdio.h>
void Cycle(int *a,int *b,int *c);
int main(){
    int a,b,c;
    printf("Enter value of a, b and c respectively: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("Value before swapping:\n");
    printf("a=%d\nb=%d\nc=%d\n",a,b,c);
    Cycle(&a,&b,&c);
    printf("Value after swapping numbers in cycle:\n");
    printf("a=%d\nb=%d\nc=%d\n",a,b,c);
    return 0;
}
void Cycle(int *a,int *b,int *c){
    int temp;
    temp=*b;
    *b=*a;
    *a=*c;
    *c=temp;
}