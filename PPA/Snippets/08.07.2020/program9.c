#include<stdio.h>
void main(){
	int i = -3, j = 2, k = 0, m;
	m = ++ i && ++ j || ++ k;
	printf("%d, %d, %d, %d\n", i, j, k, m);
}

/*
output:
	-2, 3, 0, 1

Exp:
	m=(++i && ++j) || ++k
	first (++i && ++j) incrementing both i and j we get non zero values
	(-2 && 3) which gives us true (1) in return
	m=1 || ++k
	
	according to short circuit rule now there is no need to check the other 
	parameter of k as the 
	
	first parameter satisfies the property of operator OR which gives us
	m=1
	
	now as i and j are incemented and k has no changes we get the answer
	i,j,k,m = -2,3,0,1  
	 
*/
