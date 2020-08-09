#include<stdio.h>
void main(){
	int x = 7 % 4 * 3 / 2;
	printf("value of x is %d",x);
}

/*
output:
	value of x is 4
	
Exp :
	x=7%4*3/2
	operators used - %,*,/ all three have equal priority
	so the expression will be calculated as per associativity
	i.e left to right
	=3*3/2
	=9/2
	=4
*/
