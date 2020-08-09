/*
write a c program to print odd numbers from 20 to 40
*/

#include<stdio.h>
void main(){
	int num1,num2;
	printf("Enter starting number:\n");
	scanf("%d",&num1);
	
	printf("Enter ending number:\n");
	scanf("%d",&num2);
	
	for(num1;num1<=num2;num1++){
		if(num1%2>0){
			printf("%d\n",num1);
		}
	}
	
}
