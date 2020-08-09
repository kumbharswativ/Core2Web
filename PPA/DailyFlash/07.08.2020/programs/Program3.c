/*
write a program to accept a number from user and  print
that number by decrementing until it reaches 0 using 
do-while loop.
*/

#include<stdio.h>
void main(){
	int num;
	printf("Enter a number:\n");
	scanf("%d",&num);
	do{
		printf("%d ",num);
		num--;
	}while(num!=0);
}
