#include<stdio.h>
void main(){
	int i=-30,j=20,k=1,m;
	m=++i && ++j && --k;
	/*
		m=++i && ++j && --k
		m=-29 && 21 && --k
		m= 1 && 0		............(In logical AND if one i/p is low then the o/p is 0)
		m=0
	*/
	printf("%d, %d, %d, %d\n",i, j, k, m);
}

/*
output:
	-29, 21, 0, 0
Exp:
	m=++i && ++j && --k
	the equation is processed from left to right, the property of and says that
	it needs all values to  be not equal zero for it to return true(1), so even if one value is zero
	it will stop processing further and return false(0)
	so, anything that is not zero is true
	
	first ++i stores the reference the reference of i after incremented then similarly with
	j now both values are (-29 && 21) this returns true as both parametersof && are non zero
	this returns one(i= -29, j=21)
	which gives us :
	(1 && --k)
	(k=0)
	now k gets decremented and then  its value is stored in the equation whivh is 0
	which gives us equations (1&&0)=0 as logical AND operator needs both parameters to be 
	non zero(m=0)
	the final answer therefore becomes i,j,k,m ==-29,21,0,0 hence option a
*/
