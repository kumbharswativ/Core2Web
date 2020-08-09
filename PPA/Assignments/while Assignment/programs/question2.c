/*
Write a C program to count number of digits in a number.
{Hint: performing modulus operation by 10 on the number gives us the last digit from
that number}
Input: 13345
Output: 5

*/

#include<stdio.h>
void main(){
	int n,r,count=0;
	printf("Enter a number:");
	scanf("%d",&n);
	
	while(n!=0){
		r=n%10;
		count=count+1;
		n=n/10;
	}
	printf("Count=%d\n",count);
}
