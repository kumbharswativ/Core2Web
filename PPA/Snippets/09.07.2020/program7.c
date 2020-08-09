#include<stdio.h>
void main(){
	int x = 3;
	int a = x++ + x++ + ++x + ++x;
	printf("%d\n",a);
}

/*
output:
	20
	
Exp:
	a=x++ + x++ + ++x + ++x
	a=(x++ + x++)+ ++x + ++x
	a=(3+4)+ ++x + ++x
	a=(7 + ++x)+ ++x
	a=(7+6)+ ++x
	a=13+7
	a=20 
*/
