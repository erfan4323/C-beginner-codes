#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	time_t t = time(NULL);
	struct tm date = *localtime(&t);
	while(1){
		printf("the date is %d/%02d/%02d and the time is %02d : %02d", date.tm_year + 1900, date.tm_mon + 1, date.tm_mday, date.tm_hour, date.tm_min);
		_sleep(3600);
		system("cls");
	}
}