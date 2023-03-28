#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){
    int i,j;
    i=j=1;
    while(i<=10){
     j=1;
    while( j<=10){
     printf(" %d   ",i*j);
    j=j+1;
    }
    printf("\n\n");
    i=i+1;
    }
     return 0;
}