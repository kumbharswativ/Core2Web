#include<stdio.h>
void main(){
	int x = 4.3 % 2;
	printf("value of x is %d",x);
}

/*
Output:
	error: invalid operands to binary % (have ‘double’ and ‘int’)
	
Exp :
	we ccan not apply mod operator on float and double values
	
*/
