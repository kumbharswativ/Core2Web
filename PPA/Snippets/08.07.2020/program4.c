#include<stdio.h>
void main(){
	int i=-3,j=2,k=0,m;
	m=++i && ++j && ++k;
	/*
		m=++i && ++j && ++k
		m=-2 && 3 && ++k
		m=1 && ++k
		m=1 && 1
		m=1
	*/
	printf("%d, %d, %d, %d\n",i, j, k, m);	//-2, 3, 1,1
}

/*
output:
	-2, 3, 1, 1

Exp:
	m=++i && ++j && ++k
	each of the value is preincremented, going from left to right first we get
	++i && ++j 
	
	which increases i and stores its reference and similarly with j which gives us
	-2 && 3 , solving this we get = 1 as both values are non zero i j
	then the next equations becomes 1 && ++k
	
	which gives us the equation 1 && 1 which is equivalent to = (i && j)&& k
	as both the parameters to logical AND are non zero this gives 1
	therefore i, j, k, m=-2, 3, 1, 1 
*/
