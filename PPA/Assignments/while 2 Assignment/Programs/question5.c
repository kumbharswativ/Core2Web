/*
Write a C Program, that prints square of odd numbers and cube of even
numbers. Take lower bound & upper bound of numbers range from user.
Input:
Enter Lower bound of range: 1
Enter Upper bound of range: 5
Output: 1 4 27 16 125
*/

#include<stdio.h>
void main(){
	int l,u;
	
	printf("Lower bound of range:");
	scanf("%d",&l);
	
	printf("Upper bound of range:");
	scanf("%d",&u);
	
	while(l<=u){
		if(l%2==0){
			printf("%d ",l*l*l);
		}else{
			printf("%d ",l*l);
		}
		l++;
	}
}
