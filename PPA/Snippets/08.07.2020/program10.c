#include<stdio.h>
void main(){
	int x=4, y, z;
	y = --x;
	z = x--;
	printf("%d, %d, %d\n", x, y, z);
}

/*
output:
	2, 3, 3

Exp :
	y = -x
	which means decrement x then store reference of x until evaluation 
	which gives us
	y=3
	
	x=3(after decrement)
	now
	
	z=x--
	which means store previous value of x then decrement it which gives 
	z=3
	x=2
	
	hence the answer is x,y,z=2,3,3
*/
