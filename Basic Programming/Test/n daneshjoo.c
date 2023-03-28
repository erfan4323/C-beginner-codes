#include <stdio.h>
#include <conio.h>
#include <string.h>

struct info_st{
	char id[20];
	char firstname[100];
	char lastname[100];
	char score[5]; 
};
void stu_in();
void stu_out(struct info_st[500],int num_st);


int main(){
	stu_in();
	return 0;	
}
void stu_in(){
		int num_st,i,j = 1;
	printf("Enter number of students: ");
	scanf("%d",&num_st);
	struct info_st a[num_st];
	for(i = 0 ;i <= num_st - 1 ;i++){
		printf("Enter detail of student #%d\n",j);
		printf("Enter First Name: ");
		scanf("%s",&a[i].firstname);
		printf("Enter Last Name: ");
		scanf("%s",&a[i].lastname);
		printf("Enter ID: ");
		scanf("%s",&a[i].id);
		printf("Enter Score: ");
		scanf("%s",&a[i].score);
		j++ ;}
		printf("//////////////////////////////\n") ;
		stu_out(a,num_st);
}

void stu_out(struct info_st a[500],int num_st){
	int j = 1,i ;
	for(i = 0 ;i <= num_st - 1 ;i++){
		printf("Student #%d\n",j) ;
		printf("Firstname: %s\n",a[i].firstname) ;
		printf("Lastname: %s\n",a[i].lastname) ;
		printf("ID: %s\n",a[i].id) ;
		printf("Score: %s\n",a[i].score) ;
		j++ ;	
	}
	
}


