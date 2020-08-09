/*
Write a C Program that accepts two double variables from user and print
only 2 precision. Moreover, do all arithmetic operation on them.
Input:
First Double value: 12.745
Second Double Value: 10.2229
Output:
The Entered Number up to second precision are: 12.74 & 10.22
Their Addition: 22.96
Their Multiplication: 130.20
Their Subtraction: 2.52
Their division: 1.24
*/

#include<stdio.h>
void main(){
	double i,j;
	printf("First double value:");
	scanf("%lf",&i);
	
	printf("Second Double value:");
	scanf("%lf",&j);
	
	
	printf("Addition=%.2lf\n",i+j);
	

	printf("substraction=%.2lf\n",i-j);
	
	
	printf("Multiplication=%.2lf\n",i*j);
	
	
	printf("Division=%.2lf\n",i/j);
}



