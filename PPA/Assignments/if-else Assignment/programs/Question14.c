/*
Write a Program to check whether the number N Entered by ranges between
25 to 50, Print the appropriate statements.
Input: 15
Output: 15 Doesn’t belong in the range of 25 to 50.
*/


#include<stdio.h>
void main(){
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	
	if(num>=25 && num<=50){
		printf("%d belong in the range of 25 to 50\n",num);
	}
	else{
		printf("%d doesn't belong in the range of 25 to 50\n",num);
	}
}
