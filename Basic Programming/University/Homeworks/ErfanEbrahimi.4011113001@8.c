#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
void celender(){
	//years since 1970
	int year=time(0)/(3600*24*365);
	//month since 1970
	int month=time(0)/(3600*24*365*12)+7;
	printf("we are in %d and the month is ", year+1970);
	switch (month){
		case 1:
			printf("January ");
			break;
		case 2:
			printf("February ");
			break;
		case 3:
			printf("March ");
			break;
		case 4:
			printf("April ");
			break;
		case 5:
			printf("May ");
			break;
		case 6:
			printf("June ");
			break;
		case 7:
			printf("July ");
			break;
		case 8:
			printf("August ");
			break;
		case 9:
			printf("September ");
			break;
		case 10:
			printf("October ");
			break;
		case 11:
			printf("November ");
			break;
		case 12:
			printf("December ");
			break;
		default:
		 break;		
	}
}
/*void mclock(){
	int hour, minute, second;  
 hour=minute=second=0;
 while(1){       
  //print time in HH : MM : SS format
  printf("%02d : %02d : %02d ",hour,minute,second);
  _sleep(1000);
  second++;
  system("cls");
  //update hour, minute and second
  if(second==60){
      minute+=1;
      second=0;
  }
  if(minute==60){
      hour+=1;
      minute=0;
  }
  if(hour==24){
      hour=0;
      minute=0;
      second=0;
  }
 }
}*/
int main() {
	while(1){
		celender();
		_sleep(1000);
		system("cls");
		//mclock();
	}
return 0;
}
