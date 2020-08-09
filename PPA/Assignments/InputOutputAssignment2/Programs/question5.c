/*
Write a C Program that accept minutes as input from user and display the
total number of hours and minutes.
Input: 452
Output: 7 Hours, 32 Minutes.
*/

#include<stdio.h>
void main(){
	int i,h,m;
	
	printf("Enter minutes:");
	scanf("%d",&i);
	
	h=i/60;
	m=i%60;
	printf("%d Hours,%d Minutes\n",h,m);
	
	
}
