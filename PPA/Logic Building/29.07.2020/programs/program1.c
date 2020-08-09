//write a program to print factorial of number upto nth entered number.

#include<stdio.h>
void main(){
	int n,fact=1;
	printf("Enter a number:");
	scanf("%d",&n);
	for(int i=n;i>=1;i--){
		fact=fact*i;
	}
	printf("%d\n",fact);
}
