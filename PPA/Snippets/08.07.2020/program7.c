#include<stdio.h>
void main(){
	int x = 12, y = 7, z;
	z = x != 4 ||y == 2;
	printf("z=%d\n",z);
}
/*
Output:
	z=1

Exp:
	since we go from left to right 
	z=(x != 4) || y == 2
	as x is not equal to 4 it returns true which is enough as the OR operator 
	needs only one parameter to be true 
	hence the eqn does not evaluate further which gives us the answer
	z=1 option b.
*/
