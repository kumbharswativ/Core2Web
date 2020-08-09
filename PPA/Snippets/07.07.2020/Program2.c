#include<stdio.h>
void main(){
	int i = 5;
	int num1 = i / -4;
	int num2 = i % -4;
	printf("%d %d\n", num1, num2);
}
/*
output:
	-1 1

Exp:
	#(/)Divide operator :
	- if divisor < 0 and divident > 0 then ans is negative
		E.g 5/-4=-1
		
	- if divident < 0 and divisior > 0 then ans is negative
		E.g -5/4=-1
	
	-  if divident < 0 and divident < 0 then ans is negative
		E.g -5/-4=-1
		
	- if divident > 0 and divident > 0 then ans is positive
		E.g 5/4=1
		

	# (%)mod operator :
	 - if divisor < 0 and divident > 0 then ans is negative
		E.g 5/-4=-1
		
	- if divident < 0 and divisior > 0 then ans is negative
		E.g -5/4=-1
	
	-  if divident < 0 and divident < 0 then ans is negative
		E.g -5/-4=-1
		
	- if divident > 0 and divident > 0 then ans is positive
		E.g 5/4=1	
*/
