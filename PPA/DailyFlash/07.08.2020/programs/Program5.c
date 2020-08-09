/*
Take an integer from the user and print it, Exit the loop
whenever user enters a palindrome number
*/


#include<stdio.h>
void main(){
	char ch;
	do{
		int num;
		
		printf("Enter a number:");
		scanf("%d",&num);
		
		int num1=num;
		int rem;
		int rev=0;
		
		while(num!=0){
			rem=num%10;
			rev=rev*10+rem;
			num=num/10;
		}	
		
		printf("num1=%d\n",num1);
		printf("rev=%d\n",rev);
		if(num1==rev){
			printf("You have entered palindrome\n");
			break;
				
		}
		else{
			printf("%d\n",num1);
		}
		
		printf("do you wnat to continue?\n");
		scanf(" %c",&ch);
	}while(ch=='y' || ch=='Y');
}
