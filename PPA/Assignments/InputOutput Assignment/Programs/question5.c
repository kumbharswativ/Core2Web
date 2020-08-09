/*
Write a C program that accepts two numbers from the user and prints
the average of those two number.
Input: 10 20
Output: Average of 10 & 20 is\ 15
*/

#include<stdio.h>
void main(){
	int i,j,avg;
	
	printf("Enter two numbers form user:\n");
	scanf("%d%d",&i,&j);
	
	avg=(i+j)/2;
	printf("Average of %d & %d is %d\n",i,j,avg);
	
	
}
