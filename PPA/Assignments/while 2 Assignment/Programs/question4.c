/*
Write a C Program to print the countdown of days to submit the
assignment
Input: Enter No of days to complete the assignment: 7
Output:
7 days remaining
6 days remaining
5 days remaining
.
.
1 days remaining
0 days Assignment is Overdue
*/

#include<stdio.h>
void main(){
	int n;
	printf("Enter No of days to complete the assignment:");
	scanf("%d",&n);
	
	while(n>=0){
		printf("%d days remaining\n",n);
		n--;
	}
}
