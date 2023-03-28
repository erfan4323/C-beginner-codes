#include <stdio.h>
#include <stdlib.h>

//definition of the linked list
typedef struct node{
	int x;
	struct node* link;	
}node_t;
//printing the linked list
void printlist(node_t* first){
	node_t* curr = first;
	while(curr != NULL){
		if(curr->link == NULL){
			printf("|%d|", curr->x);
			break;
		}
		printf("|%d|-->", curr->x);
		curr = curr->link;
	}
}
//add data to the end of the list
void addend(node_t* first, int val){
	node_t* curr = first;
	while(curr->link != NULL){
		curr = curr->link;
	}
	curr->link = (node_t*)malloc(sizeof(node_t));
	curr->link->x = val;
	curr->link->link = NULL;
}
//add data to first of the list
void addfirst(node_t** first, int val){
	node_t* new_node;
	new_node = (node*)malloc(sizeof(node_t));
	new_node->x = val;
	new_node->link = *first;
	*first = new_node;
}
//delet data in the end of the list
void delfirst(node_t** first){
	node_t* new_first=0;
	new_first = (*first)->link;
	(*first)->link = NULL;
	free(*first);
	*first = new_first;
}	
//delet data in first of the list
void delend(node_t *first){
	if(first->link == NULL){
		free(first);
		printf("there is no other elements to show!\n");
	}
	node_t* curr = first;
	while(curr->link->link != NULL){
		curr = curr->link;
	}
	free(curr->link);
	curr->link = NULL;
}
//delet data in the particular position in the list
void delpos(node_t** first, int pos){
	node_t* curr = *first;
	node_t* temp = 0;
	int term=0;
	while(curr->link != NULL){
		if(pos == 0){
			delfirst(first);
			break;
		}
		if(term==pos-1){
			temp = curr->link;
			curr->link = temp->link;
			free(temp);
			break;
		}
		curr = curr->link;
		term++;
	}
}
//main function
int main(){
	//creating the list
	node_t *first=0;
	//getting memory
	first = (node_t *)malloc(sizeof(node_t));
	//define first data
	first->x = 1;
	//getting memory for the second list
	first->link = (node_t *)malloc(sizeof(node_t));
	//define second data
	first->link->x = 2;
	first->link->link = NULL;
	//using fuctions
	addfirst(&first, 0);
	addend(first, 3);
	addend(first, 4);
	addend(first, 5);
	addend(first, 6);
	printlist(first);
	//----------------------------------------------------------------------//
	char answer;
	printf("\nDo you want to pop the first element? (y/n): ");
	scanf("%c", &answer);
	if(answer == 'y'){
		delfirst(&first);
	}else{
		printf("undrestood!\n");
		_sleep(1000);
	}
	printlist(first);
	//----------------------------------------------------------------------//
	fflush(stdin);
	//----------------------------------------------------------------------//
	printf("\nDo you want to pop the last element? (y/n): ");
	scanf("%c", &answer);
	if(answer == 'y'){
		delend(first);
	}else{
		printf("undrestood!\n");
		_sleep(1000);
	}
	printlist(first);
	//----------------------------------------------------------------------//
	int pos;
	printf("\nwich position do you want to delet? (enter order from 0): ");
	scanf("%d",&pos);
	delpos(&first, pos);
	printlist(first);
	//----------------------------------------------------------------------//
	return 0;
}