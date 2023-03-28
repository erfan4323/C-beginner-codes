//Source Code to Find Largest Element Using Dynamic Memory Allocation

#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,n;
    float *data;
    printf("Enter total number of elements(1 to 100): ");
    scanf("%d",&n);
    data=(float*)calloc(n,sizeof(float));  /* Allocates the memory for 'n' elements */
    if(data==NULL)
    {
        printf("Error!!! memory not allocated.");
        exit(0);
    }
    printf("\n");
    for(i=0;i<n;++i)  /* Stores number entered by user. */
    {
       printf("Enter Number %d: ",i+1);
       scanf("%f",data+i);
    }
    for(i=1;i<n;++i)  /* Loop to store largest number at address data */
    {
       if(*data<*(data+i)) /* Change < to > if you want to find smallest number */
           *data=*(data+i);
    }
    printf("Largest element = %.2f",*data);
    return 0;
}
