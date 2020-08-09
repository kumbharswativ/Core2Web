#include<stdio.h>
void main(){
	int i = 4, j = -1, k = 0, w, x, y, z;
	w = i || j || k;
	x = i && j && k;
	y = i || j && k;
	z = i && j || k;
	printf("%d, %d, %d, %d\n", w, x, y, z);
}

/*
output:
	1, 0, 1, 1

Exp:
	equations by equations:
	w=(i || j) || k
	as is is non zero there is not need to check j which gives us :
	w = 1 || k
	as the first parameter is non zero there is no need to check k which gives us 
	w=1
	
	x = (i && j) && k
	now i and j are both non zero therefore we get 
	x = 1 && k
	where k is 0 therefore this does not satisfy the property of logical AND hence
	x = 0
	
	y = i || (j && k)
	i is non zero which gives us
	y=1 || (j && k)
	as OR operator needs only one parameter to be non zero it ends here and
	y = 1
	
	z = (i && j) || k
	now i and j are both non zero therefore this gives us :
	z = 1 || k
	here  OR operator is already satisfied as there is one non zero 
	operator hence equations ends here we get:
	z=1
	
	w,x,y,z=-1,0,1,1 hence option d
*/
