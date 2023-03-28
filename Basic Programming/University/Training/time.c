#include <stdio.h>
#include <conio.h>
#include <time.h>

int main()
{
time_t t;
   printf("Today's date and time : %d \n",time(0));
   printf("%p\n",t);
   time(&t);
   printf("Today's date and time : %s",ctime(&t));
getch();
}
























/*
#include <iostream.h>
#include <conio.h>


void main()
{
size_t ut;
char *time;

time(&ut);
time = ctime(&ut);

cout<<time;
getch();

}
*/


/*
    #include <stdio.h>
    #include <time.h>
    int main(void)
    {
        time_t     now;
        struct tm  ts;
        char       buf[80];
        // Get current time
        time(&now);
        // Format time, "ddd yyyy-mm-dd hh:mm:ss zzz"
        ts = *localtime(&now);
        strftime(buf, sizeof(buf), "%a %Y-%m-%d %H:%M:%S %Z", &ts);
        printf("%s\n", buf);
        return 0;
    }

*/
