#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student{
	int eyear;
	int grade;
	char name[256];
	char stdid[11];
}student;

void stct_in();
void stct_out(student std[500], int std_count);
void stct_namesort(student std[500], int std_count);
void stct_idsort(student std[500], int std_count);
void stct_yearsort(student std[500], int std_count);
void stct_gradesort(student std[500], int std_count);
void std_selection(student std[500], int std_count);
int std_c;

int main(){
	stct_in();
	student std[std_c];
	std_selection(std, std_c);
}

void std_selection(student std[500], int std_count){
	printf("-----------------------\nhow you want to sort? \n(1) name sort (2) id sort (3) enter year sort (4) grade sort : ");
	int choice=0;
	scanf("%d", &choice);
	switch(choice){
		case 1:
			stct_namesort(std, std_count);
			stct_out(std, std_count);
			break;
		case 2:
			stct_idsort(std, std_count);
			stct_out(std, std_count);
			break;
		case 3:
			stct_yearsort(std, std_count);
			stct_out(std, std_count);
			break;	
		case 4:
			stct_gradesort(std, std_count);
			stct_out(std, std_count);
			break;	
		default:
			stct_out(std, std_count);
	}
}

void stct_in(){
	printf("how many students you want to add? ");
	scanf("%d", &std_c);
	student std[std_c];
	for(int i=0; i<std_c; i++){
		printf("\nstudent %d: \n----------------------\n", i+1);
		printf("student name: ");
		scanf("%s", &std[i].name);
		printf("student id: ");
		scanf("%s", &std[i].stdid);
		printf("student grade: ");
		scanf("%d", &std[i].grade);
		printf("the year they come in: ");
		scanf("%d", &std[i].eyear);
	}
}

void stct_out(student std[500], int std_count){
	for(int i=0; i<std_count; i++){
		printf("\n----------------------\nstudent %d: \n\n", i+1);
		printf("student name: %s\n", std[i].name);
		printf("student id: %s\n", std[i].stdid);
		printf("student grade: %d", std[i].grade);
		printf("\nthe year they come in: %d", std[i].eyear);
	}
}

void stct_namesort(student std[500], int std_count){
	int num_temp; char str_temp[256]; char str_ntemp[11];
	for(int i=0; i<std_count; i++){
		if(strcmp(std[i].name, std[i+1].name)>0){
			strcpy(str_temp, std[i+1].name);
			strcpy(std[i+1].name, std[i].name);
			strcpy(std[i].name, str_temp);
			
			strcpy(str_ntemp, std[i+1].stdid);
			strcpy(std[i+1].stdid, std[i].stdid);
			strcpy(std[i].stdid, str_ntemp);
			
			num_temp = std[i+1].grade;
			std[i+1].grade = std[i].grade;
			std[i].grade = num_temp;
			
			num_temp = std[i+1].eyear;
			std[i+1].eyear = std[i].eyear;
			std[i].eyear = num_temp;
		}
	}	
}

void stct_idsort(student std[500], int std_count){
	int num_temp; char str_temp[256]; char str_ntemp[11];
	for(int i=0; i<std_count; i++){
		if(strcmp(std[i].stdid, std[i+1].stdid)>0){
			strcpy(str_temp, std[i+1].name);
			strcpy(std[i+1].name, std[i].name);
			strcpy(std[i].name, str_temp);
			
			strcpy(str_ntemp, std[i+1].stdid);
			strcpy(std[i+1].stdid, std[i].stdid);
			strcpy(std[i].stdid, str_ntemp);
			
			num_temp = std[i+1].grade;
			std[i+1].grade = std[i].grade;
			std[i].grade = num_temp;
			
			num_temp = std[i+1].eyear;
			std[i+1].eyear = std[i].eyear;
			std[i].eyear = num_temp;
		}
	}
}

void stct_yearsort(student std[500], int std_count){
	int num_temp; char str_temp[256]; char str_ntemp[11];
	for(int i=0; i<std_count; i++){
		if(std[i].eyear < std[i+1].eyear){
			strcpy(str_temp, std[i+1].name);
			strcpy(std[i+1].name, std[i].name);
			strcpy(std[i].name, str_temp);
			
			strcpy(str_ntemp, std[i+1].stdid);
			strcpy(std[i+1].stdid, std[i].stdid);
			strcpy(std[i].stdid, str_ntemp);
			
			num_temp = std[i+1].grade;
			std[i+1].grade = std[i].grade;
			std[i].grade = num_temp;
			
			num_temp = std[i+1].eyear;
			std[i+1].eyear = std[i].eyear;
			std[i].eyear = num_temp;
		}
	}
}

void stct_gradesort(student std[500], int std_count){
	int num_temp; char str_temp[256]; char str_ntemp[11];
	for(int i=0; i<std_count; i++){
		if(std[i].grade < std[i+1].grade){
			strcpy(str_temp, std[i+1].name);
			strcpy(std[i+1].name, std[i].name);
			strcpy(std[i].name, str_temp);
			
			strcpy(str_ntemp, std[i+1].stdid);
			strcpy(std[i+1].stdid, std[i].stdid);
			strcpy(std[i].stdid, str_ntemp);
			
			num_temp = std[i+1].grade;
			std[i+1].grade = std[i].grade;
			std[i].grade = num_temp;
			
			num_temp = std[i+1].eyear;
			std[i+1].eyear = std[i].eyear;
			std[i].eyear = num_temp;
		}
	}
}