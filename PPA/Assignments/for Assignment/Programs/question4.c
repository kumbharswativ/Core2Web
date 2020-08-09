/*
write a c program to print all divisors of 50
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
