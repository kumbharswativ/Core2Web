/*
Write a C Program which takes a number as input from user if number is
even print that number in reverse order to 1 and if the number is odd print that
number in reverse order by difference two to 1.
Input: 6
Output: 6 5 4 3 2 1
or
Input: 7
Output: 7 5 3 1.
*/

#include<stdio.h>
void main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	
	if(n%2==0){
		while(n!=0){
			printf("%d ",n);
			n--;
		}
	}else{
		while(n>=0){
			printf("%d ",n);
			n=n-2;
		}
	}
}
