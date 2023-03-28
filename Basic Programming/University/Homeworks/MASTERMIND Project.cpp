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
			flag = 1;
			break;
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
		count++;
		curr_user = curr_user->next_user;
	}
	printf("\n---------------------------------------------\n");
}
//---------------------------/game setting/---------------------------------//
void game();
int printgame();
void choice(){
	printf("\ndo you want to go back to the menu?(y/n) ");
	char a;
	scanf(" %c", &a);
	if(a == 'y'){
		system("cls");
		printgame();
	}
}
bool repetition = false;
int number = 4; 
int score;
void printsetting(){
	printf("-----------------------------\n");
	printf("|        SETTING            |\n");
	printf("|                           |\n");
	printf("|   1) amount of nembers:%d  |\n", number);
	printf("|   2) repetition:%s     |\n", repetition? "true " : "false");
	printf("|                           |\n");
	printf("-----------------------------\n");
	printf("please enter you decition: ");
	int ref;
	scanf("%d", &ref);
	switch(ref){
		case 1:{
			printf("please enter the ampont of numbers: ");
			int rep=0;
			scanf(" %d", &number);
			if(number<4 || number>9){
				printf("your number should be between 4 to 9, we will set it to 4. ");
				number = 4;
			}else{
				printf("Good choice! the amount is %d.", number);
			}
			break;
		}
		case 2:{
			printf("do you want repition in the numbers?(y/n) ");
			char b;
			scanf(" %c", &b);
			if(b == 'y'){
				repetition = true;
			}else if(b == 'n'){
				repetition = false;
			}
			break;
		}
	}
}
int printgame(){
	user* log=0;
	time_t t = time(NULL);
	struct tm date = *localtime(&t);
	printf("-----------------------------\n");
	printf("|        MASTER MIND        |\n");
	printf("|                           |\n");
	printf("|     1) start the game     |\n");
	printf("|     2) settings           |\n");
	printf("|     3) login/register     |\n");
	printf("|     4) leader board       |\n");
	printf("|     5) exit               |\n");
	printf("|                           |\n");
	printf("|     local time %02d:%02d      |\n",  date.tm_hour, date.tm_min);
	printf("|     date %d/%02d/%02d       |\n", date.tm_year + 1900, date.tm_mon + 1, date.tm_mday);
	printf("-----------------------------\n");
	printf("NOTE: you sould login first\n");
	printf("please enter you decition: ");
	int ref;
	scanf("%d", &ref);
	char user[256], pass[10];
	switch(ref){
		case 1:{
			system("cls");
			game();
			choice();
			break;
		}
		case 2:{
			system("cls");
			printsetting();
			choice();
			break;
		}
		case 3:{
			system("cls");
			printf("please enter your user name: ");
			scanf(" %s", &user);
			printf("please enter your password: ");
			scanf(" %s", &pass);
			log = login(user, pass);
			printf("\n%s %s", log->username, log->password);
			choice();
			break;
		}
		case 4:{
			system("cls");
			print_user();
			choice();
			break;
		}
		case 5:{
			system("cls");
			printf("OK\nhave a nice day!");
			exit(1);
			break;
		}
		default:
			system("cls");
			printf("there is no such thing, you will be back to the menu in 3s!");
			_sleep(3000);
			system("cls");
			printgame();
			break;
	}
}
//---------------------------/game scripts/---------------------------------//
void shuffle(int *array, int n){
	srand(time(0));
	if(n>1){
        for(int i = 0; i < n - 1; i++) {
          int j = i + rand() / (RAND_MAX / (n - i) + 1);
          int t = array[j];
          array[j] = array[i];
          array[i] = t;
        }
    }
}
void randarr(int arr[]){
	int gnumber[number];
	srand(time(NULL));
	if(repetition == true){
		for (int i = 0; i < number; i++){
			gnumber[i] = (rand() % 9) + 1;
		}
	}else{
		shuffle(gnumber, number);
	}
	
}
void randsrch(int arr[], int g[]){
	int count=0, garr[number];
	for (int i = 0; i < number; i++){
		for(int j=0; j<number; j++){
			for(int k=0; k<number; k++){
				if(arr[j] == g[k]){
					garr[i] == g[k]; 
					score += 2;
				}	
			}
		}
	}
	printf("\nyou gussed");
	for(int i=0; i<number; i++){
		printf(" %d,", garr[i]);
	}
	printf(" but it's not in the order");
}
void esearch(int arr[], int g[]){
	int count=0, garr[number];
	for (int i = 0; i < number; i++){
		for(int k=0; k<number; k++){
			if(arr[k] == g[k]){
				garr[i] == g[k]; 
				score += 5;
			}	
		}
	}
	printf("\nyou gussed");
	for(int i=0; i<number; i++){
		printf(" %d,", garr[i]);
	}
	printf(" and it's in the order");
}
bool fsearch(int arr[], int g[]){
	int count=0, garr[number];
	for (int i = 0; i < number; i++){
		for(int k=0; k<number; k++){
			if(arr[k] == g[k]){
				count++; 
				score += 10;
			}	
		}
	}
	if(count == number){
		return true;
	}
}
void game(){
	user* now ;
	int time, turn = 12, guess[number], gnumber[number], INumberP;
	score = 0;
	randarr(gnumber);
	for(int i = 0; i < number; i++){
		printf("%d", gnumber[i]);
	}
	printf("|welcome to MASTERMIND|\nthe computer generated the code!\nso you should guess the code\nyou only have 12 turns!\n\n");
	if(repetition == true){
		time = 7 * number; 
		printf("you have %d seconds to guess", time);
	}else{
		time = 10 * number; 
		printf("you have %d seconds to guess", time);
	}
	for(turn; turn>=0; turn--){
		printf("\nyour guess: ");
		scanf( " %d", &INumberP);
		for(int j = number - 1; j >= 0; j--){
			guess[j] = INumberP % 10;
			INumberP /= 10;
		}
		if(fsearch(gnumber, guess) == true){
			break;
		}
		randsrch(gnumber, guess);
		esearch(gnumber, guess);
	}
	if(fsearch(gnumber, guess) == true){
		printf("congratulations! you have won! yor score is %d", score);
	}else{
		printf("you lost! also your score is %d", score);
	}
}
//---------------------------/main fuctions/---------------------------------//
int main(){
	creatuser("erfan", "5313");
	printgame();
}