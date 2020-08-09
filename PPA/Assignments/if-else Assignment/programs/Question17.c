/*
Write a Program that accepts three Integers from user then finds largest
number amongst them as well as it should print whether the largest number amongst them
is odd or even.
Input:
Number One: 20
Number Two: 21
Number Three: 12
Output: The largest Number amongst 20, 21 & 12 is 21 & 21 is an Odd Number

*/

#include<stdio.h>
void main(){
	int n1,n2,n3,a;
	
	printf("Number one:\n");
	scanf("%d",&n1);
	
	printf("Number Two:\n");
	scanf("%d",&n2);
	
	printf("Number Three:\n");
	scanf("%d",&n3);
	
	if(n1>n2 && n1>n3){
		printf("The largest number amongst%d,%d & %d is %d &",n1,n2,n3,n1);
		if(n1%2==0){
		printf("%dis an even number\n",n1);
	}
		else{
		printf("%dis an odd number\n",n1);
		}
		
	}
	else if(n2>n1 && n2>n3){
		printf("The largest number amongst%d,%d & %d is %d &",n1,n2,n3,n2);
		if(n2%2==0){
			printf("%dis an even number\n",n2);
		}
		else{
			printf("%dis an odd number\n",n2);
		}
	}
	else{
		printf("The largest number amongst%d,%d & %d is %d &",n1,n2,n3,n3);
		if(n3%2==0){
		printf("%dis an even number\n",n3);
		}
		else{
		printf("%dis an odd number\n",n3);
		}
	}
	
}


