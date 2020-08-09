/*
Write a program to print all the numbers that can divide 65.
Ip -> 65
Op -> 1, 5, 13 , 65
*/

#include<stdio.h>
void main(){
	int i,j;
	printf("Enter starting number:\n");
	scanf("%d",&i);
	
	printf("Enter Ending number:\n");
	scanf("%d",&j);
	
		for(i;i<=j;i++){
			if(j%i==0){
				printf("%d\n",i);
			}
		}
}
