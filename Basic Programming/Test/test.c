#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//---------------------------/user account/---------------------------------//
typedef struct user_login{
	char username[256];
	char password[10];
	int score;
	struct user_login* next_user;
}user;
user* head = NULL;
user* curr_user = NULL;
user* index = NULL;
void creatuser(char username[], char password[]){
	user* link = (user*)malloc(sizeof(user));
	strcpy(link->username, username); 
	strcpy(link->password, password);
	link->score = 0;
	link->next_user = NULL;
	if(head == NULL){
		head = link;
	}else{
		curr_user = head;
		while(curr_user->next_user != NULL){
			curr_user = curr_user->next_user;
		}
		curr_user->next_user = link;
	}
}
user* login(char username[], char password[]){
	user* log = 0;
	int flag=0;
	curr_user = head;
	while(curr_user->next_user != NULL){
		if(strcmp(curr_user->password, password)>0 && strcmp(curr_user->username, username)>0){
			printf("we have found your account! enjoy gaming ");
			break;
			flag = 1;
		}
		curr_user = curr_user->next_user;
	}
	if(flag == 0){
		printf("you don't have any account, we will made you! enjoy");
		creatuser(username, password);
	}
}
void print_user(){
	curr_user = head;
	int count=1;
	printf("\n----------------/LEADER BOARD/---------------\n");
	while(curr_user != NULL){
		printf("User %d\nUser Name: ", count);
		puts(curr_user->username);
		printf("Score: %d\n\n", curr_user->score);
		curr_user = curr_user->next_user;
	}
}
int main(){
	user* log = 0; 
	char user[256], pass[256];
	printf("please add your user name: ");
	gets(user);
	printf("and your password: ");
	gets(pass);
	log = login(user, pass);
	print_user();
}