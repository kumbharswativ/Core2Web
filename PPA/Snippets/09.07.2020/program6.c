#include<stdio.h>
void main(){
	int x = 3;
	int a= x++ + x++ + x++ + x++;
	printf("%d\n",a);
}

/*
Output:
	18

Exp:
	a=x++ + x++ + x++ + x++;
	a=(x++ + x++)+ x++ + x++
	a=(3+4)+ x++ + x++
	a=(7 + x++)+ x++
	a=(7+5)+ x++
	a=12+6
	a=18
*/
