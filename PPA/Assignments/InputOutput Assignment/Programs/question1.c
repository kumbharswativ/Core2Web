/*
Write a C program that takes the radius of a circle as input from the user,
and calculates it’s Area and Circumference.
Input: Radius: 4
Output:
Area of Circle: 50.24
Circumference of Circle: 25.12
*/

#include<stdio.h>
void main(){
	int r;
	float a,c;
	
	printf("Enter radius of circle:");
	scanf("%d",&r);
	
	a=(3.14)*r*r;
	printf("Area of circle=%f\n",a);
	
	c=2*(3.14)*r;
	printf("circumference of circle=%f\n",c);
}
