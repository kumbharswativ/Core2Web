#include<stdio.h>
void main(){
	int a = 20, b = 15, c = 5;
	int d;
	d = a == (b + c);
	printf("%d", d);
}

/*
Output:
	1

Exp:
	expression d=a==(b+c)
	here bracket has high priority
	d=a==(15+5)
	=a==20
	=20==20 .........comparision operator == will evaluates to true if the
			  both values are equal and return 1
        =1
*/
