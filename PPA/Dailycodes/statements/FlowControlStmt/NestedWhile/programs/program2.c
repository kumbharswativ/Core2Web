/*
	A 2 C 4 E 
	F 7 H 9 
	J 11 L 
	M 14 
	O 

*/

#include<stdio.h>
void main(){
	int i=1;
	char ch='A';
	int count=1;
	while(i<=5){
		int j=5;
		while(j>=i){
			if(j==2 || j==4){
				printf("%d ",count);
				
			}else{
				printf("%c ",ch);
			}
			count++;
			ch++;
			j--;
		}

		printf("\n");
		i++;
	}
}
