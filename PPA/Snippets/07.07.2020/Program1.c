#include<stdio.h>
void main(){
	int i=-5;
	int num=i%4;
	printf("%d\n",num);
	
}
/*
Output:
	-1
	
Exp:
	If the divident is negative then the reminder is also a negative 
	num e.g.1) -10%6=-4
	    e.g.2) -5%-4=-1
	%a opearator always have negative value if divident is negative or if 
	both are negative  
*/
