#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
	char data[256];
	struct node* link;
}node;

node* first=0;

void printl(){
	node* curr = first;
	while(curr != NULL){
		if(curr->link == NULL){
			printf("|%s|", curr->data);
			break;
		}
		printf("|%s|-->", curr->data);
		curr = curr->link;
	}
}

void unshift(char name[]){
	node* link = (node*)malloc(sizeof(node));
	node* curr;
	strcpy(link->data, name);
	link->link = NULL;
	if(first == NULL){
		first = link;
	}else{
		curr = first;
		while(curr->link != NULL){
			curr = curr->link;
		}
		curr->link = link;
	}
}

int main(){
	unshift("Erfan");
	unshift("Arefeh");
	unshift("erfan");
	printl();
}


