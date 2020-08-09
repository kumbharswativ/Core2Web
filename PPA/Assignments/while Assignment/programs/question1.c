/*
Write a C Program to print the sum of all even numbers and
multiplication of odd numbers ranging between 1 to n. where n is a number entered
by user.
Input: Enter N => 10
Output:
Sum of all even numbers between 1 to 10: 30
Multiplication of all odd numbers between 1 to 10: 945

*/
#include<stdio.h>
void main(){
	int i=1,n,sum=0,mul=1;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	while(i<=n){
		if(i%2==0)
			sum=sum+i;
		else
			mul=mul*i;
		i++;
	}
	printf("Sum of all even numbers between %d to %d :%d\n",i,n,sum);
	printf("Multiplication of all odd numbers between %d to %d: %d\n",i,n,mul);
	
}

