#include <stdio.h>
#include <stdlib.h>
struct node{
  char data;
  struct node *link;
}; 
struct node *create(char data){
  struct node *temp=0;
  temp = (struct node *)malloc(sizeof(struct node));	
  temp->data = data;
  temp->link = NULL;
}
void show(struct node *first){
 node *temp;
 temp = first;
 for( ; temp != NULL ; temp=temp->link)
  printf("|%c|--> ",temp->data); 
}
int main(){
    struct node *first=0,*newnode,*last=0;
    char ch[30];
    gets(ch);
    for(int i=0 ; ch[i] != '\0' ; i++){
      
      if(!first){
        first = create(ch[i]);
        last = first;
      }else{
        newnode = create(ch[i]);
        last->link = newnode;
        last = last->link;
      }
    }
    printf("result \n");
    show(first);
}