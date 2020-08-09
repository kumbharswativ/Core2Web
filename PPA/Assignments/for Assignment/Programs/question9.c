/*
Write a program to print alternative numbers in reverse order between 15 to 30. (without using if)
Ip -> 15 30
Op -> 30 28 26 24 22 20 18 16
*/


#include<stdio.h>
void main(){
	
	for(int i=30;i>=15;i-=2){
		printf("%d\n",i);
	}
}
