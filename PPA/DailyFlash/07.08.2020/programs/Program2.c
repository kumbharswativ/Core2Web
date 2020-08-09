/*
Take an integer from the user and print it, Exit the 
loop whenever user enters a prime number.
*/

#include<stdio.h>
void main(){
	int n,i,flag=0;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	for(int i=2;i<=n/2;i++){
		if(n%i>0){
			flag==1;
			
			break;
		}
		else{
			printf("Non prime Number : %d\n",n);
		}
	}
}
