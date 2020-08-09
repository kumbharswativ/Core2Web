#include<stdio.h>
int main(){
	int a=500, b=100,c;
	if(!a >= 400)
		b=300;
	c=200;
	printf("b = %d c = %d\n", b, c);
}

/*
output:
	b = 100 c = 200
-------------------------------------------------------------
Exp:
	Here a=500, the precedence of relational operators if higher
	than that of logical operators 
	
	so first a>=400 will get checked and then logical not operator
	will work 
	
	here the value of a(500) i.e greater than 400 so the
	statement becomes true
	i.e !(true)
	
	negation of true is false and so if statement will return 
	false and b will not get assigned with new value
	
*/
