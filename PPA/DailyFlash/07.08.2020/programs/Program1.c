/*
write a program in c to print multiply two numbers without
actually using the * operator by using do-while loop
*/

#include<stdio.h>
void main(){
	int num1,num2;
	int mult=0;
	
	printf("Enter two numbers: ");
	scanf("%d %d",&num1,&num2);
	
	int temp=num2;
	
	while(num2!=0){
		mult+=num1;
		num2--;
	}
	
	printf("Multiplication of %d and %d is %d\n",num1,temp,mult);
}
