/*
write a c program to print even numbers between 50 to 70
*/


#include<stdio.h>
void main(){
	int i,j;
	
	printf("Enter starting number:\n");
	scanf("%d",&i);
	
	printf("Enter Ending number:\n");
	scanf("%d",&j);
	
	for(i;i<=j;i++){
		if(i%2==0){
			printf("%d\n",i);
		}
	}
	
}


