/*
Write a program to print the count of even numbers which are divisible
by 5 from 1 to 50 .
Output: 10 ,20 ,30 ,40 ,50
*/

#include<stdio.h>
void main(){
	int i=1;
	while(i<=50){
		if(i%5==0){
			if(i%2==0){
				printf("%d ",i);
			}
		}
		i++;
	}
}
