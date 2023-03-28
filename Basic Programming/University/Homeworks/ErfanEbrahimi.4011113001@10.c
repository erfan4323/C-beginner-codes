#include <conio.h>
#include <stdio.h>
#include <string.h>

struct Student{
 char name[20];
 float degree;
 char stdnum[10];
};

void strctcmp(struct Student std[11]);

int main() {
 struct Student std[11];
 printf("please add students information:\n");
 for(int i=0; i<11; i++){
 	if(i==10){
 		break;
		}
 	printf("\nstudent %d name: ",i+1);
 	scanf("%s", &std[i].name);
 	printf("\nstudent %d degree: ",i+1);
		scanf("%f", &std[i].degree);
 	printf("\nstudent %d number: ",i+1);
 	scanf("%s", &std[i].stdnum);
 	printf("\n-------------------------");
	}
	printf("----------------------------");
	printf("\nyour informations are:");
	strctcmp(std);
return 0;
}

void strctcmp(struct Student std[11]){
	for(int i=0; i<11; i++){
	 if(strcmp(std[i].stdnum,std[i+1].stdnum)>0){
		 int temp;
		 char namet[20],numt[10];
		 strcpy(namet,std[i].name);
		 strcpy(numt,std[i].stdnum);
		 temp=std[i].degree;
		 
		 strcpy(std[i].stdnum,std[i+1].stdnum);
		 strcpy(std[i].name,std[i+1].name);
		 std[i].degree=std[i+1].degree;
		 
		 strcpy(std[i+1].stdnum,numt);
		 strcpy(std[i+1].name,namet);
		 std[i+1].degree=temp;
		}
	}
	for(int j=0; j<10; j++){
		printf("\n\nstudent %d:", j+1);
		printf("\n\n    NAME: %s", std[j].name);
		printf("\n    DEGREE: %.2f", std[j].degree);
		printf("\n    NUMBER: %s", std[j].stdnum);
	}
}