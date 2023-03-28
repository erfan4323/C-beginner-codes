#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
#include <time.h>

int main(){
    srand(time(0));
	int j;
   for(int i=1;i<=50;i++){
    	printf("%d\t",rand()%90+10); ///1,2,3,4,5,6
       // printf("%d\t",time(0));
      //  sleep(1);
       // system("cls");
    }
    getch();
    return 0;
}
