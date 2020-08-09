/*
write a c program to print a table of 3 take input from user
i/p = 3
o/p = 3 6 9 12 18 21 24 27 30
*/

#include<stdio.h>
void main(){
	int n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	
	for(int i=1;i<=10;i++){
		printf("%d\n",n*i);
	}
}
