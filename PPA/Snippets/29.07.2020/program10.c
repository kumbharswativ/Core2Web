#include<stdio.h>
void main(){
	int point1,point2,point3,point4,point5;
	int val;
	printf("points for point1,point2,point3,point4,point5\n");
	scanf("%d,%d,%d,%d,%d",&point1,&point2,&point3,&point4,&point5);
	val=point1+point2+point3+point4+point5;
	printf("%f\n",val);
}

/*
output:
	points for point1,point2,point3,point4,point5 are 5 6 7 8 9 10 11 0.000000
----------------------------------------------------------------------------------------------------------------------------
Exp:
	- printf() function is used to write(display/print) the output on the screen
	
	- scanf() function is used to read the input from keyboard(from user)
	
	-point1,point2,point3,point4,point5 all are integer type variables
	
	-scanf() function read the data from keyboard for 5 variables eg. 5 6 7 8 9 
	
	- In scanf() function we preferred that don't write anything else excepting
	  format specifier 
	  in this we are giving comma to separate the format specifiers because of comma 
	  code gives undefined behaviour and print garbage value e.g 0.000000
	  
	- we use %f format specifiers to print val, it gives float value
*/
