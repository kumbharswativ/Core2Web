#include<stdio.h>
void main(){
	int i = -3 , j = 2, k = 0, m;
	m = ++i || ++j && ++k;
	printf("%d, %d, %d, %d\n", i, j, k, m);
}

/*
output:
	-2, 2, 0, 1

Exp:
	this equation is first grouped 
	m=++i || (++j && ++k);
	even though the priority of && is higher than || we  go from left to right evaluation first
	
	where 
	i incremented value reference m=-2||(++j && ++k)
	since in || the answer is true therefore even if one parameter is true therefore
	here the first parameter is true 
	
	and the eqn does not evaluate further this is called short circuit rule
	
	now m=1 and j and k are unchanged
	therefore  the answer is -2,2,0,1 hence optioon d	
*/
