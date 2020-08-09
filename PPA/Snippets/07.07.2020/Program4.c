#include<stdio.h>
void main(){
	int num = 4 * 5 / 2 + 9;
	printf("%d\n",num);
}

/*
output:
	19
	
Exp:
	num=4*5/2+9
	Here operators are used here *,/ and +
	* and / have highest priority than +
	=20/2+9.......first * operation evaluated
	=10+9.........then /
	=19 ..........then +
*/
