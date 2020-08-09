#include<stdio.h>
void main(){
	int x=3;
	double y=3.5;
	int z;
	z= x+y;
	printf("%f\n",z);
}

/*
output:
	0.000000

Exp:
	x is of int type and stored value 3 y is of double type and stored
	value of 3.5
	z is of int type
	
	z=3(int) + 3.50000000(double)
	z=6.50000000
	
	but z is of int type so it will stored only 6
	z=6
	
	but in printf("%f\n",z)
	
	format specifier is float / double type so it cannot converted int to double 
	 
*/	
