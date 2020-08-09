#include<stdio.h>
void main(){
	printf("%x\n",2<<2);
}
/*
output:
	8

Exp:
	left shift operator is applied twice on 2
	2<<2
	
	which means 2^3 as when we left shfit a number by 1 it gets multiplied by 2 
	so here it is done twice 
	(2*2)*2 =8
	
	In hexadecimal as well as decimal as hexadecimal has decimal values upto 9 bit
	
	(10)base2 =(2)base10;
	00000000 00000000 00000000 00000010
	
	left shift twice :
	00000000 00000000 00000000 00001000
	
	which is equivalent to 8 in decimal which then converted to hexadecimal also gives 8 
*/
