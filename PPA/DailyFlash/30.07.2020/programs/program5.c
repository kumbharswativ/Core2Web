/*
			D	
		C	D	C	
	B	C	D	C	B	
A	B	C	D	C	B	A	
*/

#include<stdio.h>
void main(){
	char ch='D';
	for(int row=1;row<=4;row++){
		
		for(int space=3;space>=row;space--){
			printf("\t");
		}
		for(int col=1;col<=row*2-1;col++){
			printf("%c\t",ch);
			if(col>=row){
				
				ch--;
			}
			else{
				
				ch++;
			}
		}
		printf("\n");
	}
}
