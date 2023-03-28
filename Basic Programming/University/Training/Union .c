/*
Unions are quite similar to the structures in C. Union is also a derived type as structure.
Union can be defined in same manner as structures just the keyword used in defining
union in union where keyword used in defining structure was struct.
*/

#include <stdio.h>
union job {         //defining a union
   char name[32];
   float salary;
   int worker_no;
}u;
struct job1 {
   char name[32];
   float salary;
   int worker_no;
}s;
int main(){
   printf("size of union = %d",sizeof(u));
   printf("\nsize of structure = %d", sizeof(s));
   return 0;
}