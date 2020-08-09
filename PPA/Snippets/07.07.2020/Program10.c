#include<stdio.h>
void main(){
	int i = 10,j;
	j = ++ i;
	printf("%d, %d", i, j);
}

/*
Output :
	11, 11
	
Exp :
	i=10
	j=++i
	=i  ...........i=11 and return reference of i
	j=11 ............i chya box madhli value (incremented) j madhe copy keli jate
*/
