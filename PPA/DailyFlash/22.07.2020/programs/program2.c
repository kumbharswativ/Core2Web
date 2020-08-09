/*
write a program to print the following pattern using nested while loop
	1
	1 2
	2 3 4
	4 5 6 7
	7 8 9 10 11

*/

#include<stdio.h>
void main(){
	int i=1;
	int num=1;
	while(i<=5){
		int j=1;
		while(j<=i){
			printf("%d ",num);
			num++;
			j++;
		}
		i++;
		num--;
		printf("\n");
		
	}
		
	
}
