/*
Write a C program that accepts input of every data type (one of each)
from user and prints them.
Input: Enter an Integer value: 10
Output: Entered Integer Value is 10
*/

#include<stdio.h>
void main(){
	int i;
	float f;
	char c;
	
	printf("Enter an integer value:\n");
	scanf("%d",&i);
	printf("Entered Integer value is %d\n",i);
	
	printf("Enter an float value:\n");
	scanf("%f",&f);
	printf("Entered float value is %f\n",f);
	
	printf("Enter an character value:\n");
	scanf(" %c",&c);
	printf("Entered character value is %c\n",c);
}
