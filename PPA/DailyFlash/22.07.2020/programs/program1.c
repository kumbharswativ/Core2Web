/*
write a c program to take a number as input and print whether that number
is a strong number or not
{Note: Strong number is that whose digit's factorial additions is equal to
that 145 is strong number =1+24+120=145}
Input:145
output:145 is strong number
*/

#include<stdio.h>
void main(){
	int num,temp,sum=0;
	
	printf("Enter a number:");
	scanf("%d",&num);
	temp=num;
	while(num){
		int i=1,fact=1,r;
		r=num%10;
		while(i<=r){
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		num=num/10;
	}
	if(sum==temp){
		printf("%d is a strong number\n",temp);
	}else{
		printf("%d is not strong number\n",temp);
	}
}


