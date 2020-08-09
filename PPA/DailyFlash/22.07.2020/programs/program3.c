/*
write a program to print following pattern using nested while loop
	5 4 3 2 1
	8 6 4 2
	9 6 3
	8 4
	5 
*/


#include<stdio.h>
void main(){
	int num=5;
	int i=1;
	while(i<=5){
		int j=1;
		int val=num;
		while(j<=num){
			printf("%d ",i*val);
			j++;
			val--;
		}
		i++;
		num--;
		printf("\n");
	}
}
