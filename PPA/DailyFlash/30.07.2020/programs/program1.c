/*
				A	
			B	B	B	
		C	C	C	C	C	
	D	D	D	D	D	D	D	
E	E	E	E	E	E	E	E	E

*/

#include<stdio.h>
void main(){
	char ch='A';
	for(int row=1;row<=5;row++){
		for(int space=4;space>=row;space--){
			printf("\t");
		}
		for(int col=1;col<=row*2-1;col++){
			printf("%c\t",ch);
		}
		ch++;
		printf("\n");
	}
}
