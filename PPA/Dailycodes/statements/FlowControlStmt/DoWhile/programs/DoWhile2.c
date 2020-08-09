#include<stdio.h>
void main(){
	
	int num;
	char ch;
	
	
	do{
		
		printf("Enter a number\n");
		scanf("%d",&num);
		int var=num;
		int rev=0;
		int rem=0;
		
		
		while(num!=0){
			rem=num%10;
			rev=rev*10+rem;
			num=num/10;
		}
		printf("reverse of %d is %d\n",var,rev);
		printf("Do you want to continue?\n");
		scanf(" %c",&ch);
	}while(ch=='y' || ch=='Y');
}
