//All lowercase string converted to uppercase.

#include <stdio.h>
#include <conio.h>
void upper(char *string);
void main()
{
char s[50] ;
printf("enter a string in");
printf("lowercase:\n");
gets(s);
upper(s);
printf("\nuppercase of");
printf("string is:\n");
puts(s );
getch();
}
void upper(char *string)
{
while(*string)
{
if(*string>='a' && *string<='z')
*string=*string-32 ;
string++ ;
}
}