#include<stdio.h>
int result[3];
void arrcmp(int arr1[], int arr2[]);
int main(){
	int arr1[3], arr2[3];
	printf("First array: \n");
	for(int i=0; i<3; i++){
		scanf("%d", &arr1[i]);
	}
	printf("Second array: \n");
	for(int i=0; i<3; i++){
		scanf("%d", &arr2[i]);
	}
	arrcmp(arr1, arr2);
	printf("common indexes: ");
	for(int i=0; i<3; i++){
		printf(" %d", result[i]);
		if(result[i+1] == NULL){
			break;
		}
		printf(" - ");
	}
}
void arrcmp(int arr1[], int arr2[]){
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(arr1[i]==arr2[j]){
				result[i] = arr1[i];
			}
		}
	}
}