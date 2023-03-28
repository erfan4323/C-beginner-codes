#include <stdio.h>
#include <stdlib.h>
int mltp(int number1, int number2){
	return number1*number2;
}
int sum(int number1, int number2){
	return number1+number2;
}
int min(int number1, int number2){
	return number1-number2; 
}
float dvd(float number1, float number2){
	return number1/number2;
}
int lftovr(int number1, int number2){
	return number1%number2;
}
int bin(int decimal){
	int arr[100];
	int t=-1;
	int dcnc = decimal;
	for(int i=0; i<=dcnc; i++){
		arr[i]=decimal%2; 
		decimal=decimal/2; 	
		t++;
		if(decimal==0){
			break;
		}
	}
	printf("it's ");
	for(int i=t; t>=decimal; t--){
 	printf("%d", arr[t]);
	}
	return 0;
}
int oct(int decimal){
	int arr[100];
	int t = -1;
	int dcnc = decimal;
	for(int i=0; i<=dcnc; i++){
		arr[i]=decimal%8; 
		decimal=decimal/8; 	
		t++;
		if(decimal==0){
			break;
		}
	}
	printf("it's ");
	for(int i=t; t>=decimal; t--){
 	printf("%d", arr[t]);
	}
	return 0;
}
void calculate(){
	int num1,num2,num3,calord,calord2,command,mod;
 printf("1:start\n2:stop\n");
 scanf("%d",&command);
 
 switch (command){
 	//switch 1 starts
 	case 1:{
 		printf("witch command you want to use?\n1:caculate\n2:convert\n");
 		scanf("%d", &mod);
 		
 		switch (mod){
 			//switch 2 starts
 			case 1:{
 				printf("please add two numbers: ");
     scanf("%d%d", &num1, &num2);
     printf("how to calculate?\n1:sum\n2:minus\n3:multi\n4:devide\n5:left over\n");
     scanf("%d", &calord);
     
      switch (calord){
      	//switch 3 starts
 	    case 1:{
 		   int s=sum(num1, num2);
 	   	printf("it's %d\n", s);
		   	break;
		   }
 					case 2:{
 					int m=min(num1, num2);
 					printf("it's %d\n", m);
						break;
					}
 				case 3:{
 					int mu=mltp(num1, num2);
 					printf("it's %d\n", mu);
						break;
					}
 				case 4:{
 					int d=dvd(num1, num2);
 					printf("it's %d\n", d);
						break;
					}
						case 5:{
						int l=lftovr(num1, num2);
						printf("it's %d\n", l);
						break;
					}
		    default :
			    printf("the given order is not found!\n");
	    }//switch 3 ends
	    
					break;
				}//we are still in switch 2
				case 2:{
					printf("please add a number: ");
     scanf("%d", &num3);
     printf("how to convert?\n1:to binery\n2:to Octal\n");
     scanf("%d", &calord2);
     switch(calord2){
     	// switch 4 starts
				 	case 1:{
		    	int b=bin(num3);
		    	printf("\n");
	    		break;
		    }
		    case 2:{
		   	int h=oct(num3);
		   	printf("\n");
		   	break;
		    }
     	default :
			    printf("the given order is not found!\n");
					}//switch 4 ends
					break;
				}
				default:
					printf("the given order is not found!\n");
			}//switch 2 ends
			break;
		}//we are still in switch 1
		case 2:{
 		exit(1);
			break;
		}
		default:
			printf("the given order is not found!\n");
			break;
	}//switch 1 ends

}
int main() {
	while(1){
	calculate();	
	_sleep(3000);
	system("cls");
	}
return 0;
}