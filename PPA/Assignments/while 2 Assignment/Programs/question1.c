/*
Write a C Program to take a number as input from user and print sum of
all natural numbers from 1 to up to that number.
Input: Enter a Number: 10
Output: The Sum of all natural number between 1 to 10 is: 55

*/

#include<stdio.h>
void main(){
	int i=1,n,sum=0;
	printf("Enter a number:");
	scanf("%d",&n);
	while(i<=n){
		sum=sum+i;
		i++;
	}
	printf("The sum of all natural numbers between 1 to %d is :%d\n",n,sum);
}
