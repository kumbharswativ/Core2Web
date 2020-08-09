/*
Write a program in c in which user should enter two numbers if both the numbers are positive
multiply them and provide to switch case to verify number is even or odd, if user enters any
negative number program should terminate saying “Sorry negative numbers not allowed”
*/

#include<stdio.h>
void main(){
	int x,y,m,z;

	printf("Enter two numbers\n");
	scanf("%d%d",&x,&y);
	
	if(x>=0 && y>=0){
		z=x*y;
		m=z%2;
		
		switch(m){
			case 0:
				printf("%d is even\n",z);
				break;
			default:
				printf("%d is odd\n",z);
		}
	}else{
		printf("Sorry negative numbers not allowed\n");
	}
}
