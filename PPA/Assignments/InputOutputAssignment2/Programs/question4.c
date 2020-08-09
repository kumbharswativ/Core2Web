/*
Write a program that accepts integer input from user and print if it is
prime number or not.
(Note: A prime number is such a number which is only divisible 1 & that number
itself)
Input: 5
Output: 5 is a Prime Number.
*/

#include<stdio.h>
void main(){
	int i,n,flag=0;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			flag=1;		
		}		
	}	
	
	if(n==1){
		printf(" 1 is not a prime number\n");
	}else{
		if(flag==0){
			printf("%d is a prime number\n",n);
		}else{
			printf("%d is not a prime number\n",n);
		}
	}
}
