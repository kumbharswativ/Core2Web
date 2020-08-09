/*
Write a c program to print characters from A to Z in upper case and in lower case
Op -> A = a , B = b
*/

#include<stdio.h>
void main(){
	
	
	for(int i=65,j=97;i<=90,j<=122;i++,j++){
		printf("%c=%c\n",i,j);
	}
}
