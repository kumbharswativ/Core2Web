/*
Write a C program to take input from user and check whether the number is
Perfect number or not. Using while loop.
{Note: if sum of all perfect divisors of a number is equal to that number then that
number is termed as perfect number}
Input: 6
Output: 6 Is a Perfect Number.

*/

#include<stdio.h>
void main(){
	int sum=0,i=1,n,rem;
	printf("enter a number:");
	scanf("%d",&n);
	
	while(i<=(n-1)){
		rem=n%i;
		if(rem==0){
			sum=sum+i;
		}
		i++;	
	}
	if(sum==n){
		printf("%d is a perfect number\n",n);
	}else{
		printf("%d is not a perfect number\n",n);
	}
}
