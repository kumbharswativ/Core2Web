/*
Write a c program to print all the ASCII values of numbers 1 to 128
Op -> A = 65 , B = 66
*/

#include<stdio.h>
void main(){
	int i,j;
	printf("Enter starting number:\n");
	scanf("%d",&i);
	
	printf("Enter Ending number:\n");
	scanf("%d",&j);
	
	for(i;i<=j;i++){
		printf("%c=%d\n",i,i);
	}
}
