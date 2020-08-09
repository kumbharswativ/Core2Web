/*
write a program to print 
A z B y C x D w E v F u G t H s
*/
#include<stdio.h>
void main(){
	for(int i=0;i<=7;i++){
		printf("%c %c ",'A'+i,'z'-i);
	}
}
