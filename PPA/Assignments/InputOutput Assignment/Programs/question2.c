/*
Write a C program that accepts the time in hours and minutes from user,
and Prints as total number of Minutes.
Input:
Enter Hours: 2
Enter minutes: 30
Output: Total Minutes: 150 minutes.
*/

#include<stdio.h>
void main(){
	int h,a,m;
	
	printf("Enter Hours:\n");
	scanf("%d",&h);
	
	printf("Enter Minutes:\n");
	scanf("%d",&m);
	
	a=(60*h)+m;
	printf("Total minutes:%d\n",a);
	
}
