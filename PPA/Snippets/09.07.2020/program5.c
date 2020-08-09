#include<stdio.h>
void main(){
	int x = 3;
	int a = ++x + ++x + ++x + ++x;
	printf("%d\n",a);
}

/*
output:
	23
	
Exp:
	a=++x + ++x + ++x + ++x
	a=(++x + ++x)+ ++x + ++x
	a=(5+5)+ ++x + ++x
	a=(10 + ++x)+ ++x
	a=(10 + 6)+ ++x
	a=16 + 7
	a=23
*/
