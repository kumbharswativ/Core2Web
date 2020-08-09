#include<stdio.h>
void main(){
	int a = 20;
	double b = 15.6;
	int c;
	c = a + b;
	printf("%d", c);
}

/*
Output:
	35
	
Exp :
	a=20 ...........type: int
	b=15.6 ..............type: double
	c=(garbage) ............type: int
	c=a+b
	=20+15.6 .............addition of two double or float values is always double value
	=35.6
	c=35 ..............but we are storing it in int  type variable so it will truncate
			    the mantisa i.e digits after (.) and value is implicitly converted to
			    int 
*/
