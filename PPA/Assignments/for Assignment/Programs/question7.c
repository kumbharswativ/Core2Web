/*
​ Write a program to print multiples of 6 upto 60.
Ip -> Enter a number - 6
Enter limit - 60
Op -> 6 ,12 ,18 , 24,...,60
*/

#include<stdio.h>
void main(){
	int n,l;
	printf("Enter a number:\n");
	scanf("%d",&n);
	
	printf("Enter limit number:\n");
	scanf("%d",&l);
	
	for(int i=1;i<=l;i++){
		if(i%n==0){
			printf("%d\n",i);
		}
	}
}
