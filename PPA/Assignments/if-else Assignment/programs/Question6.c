#include<stdio.h>
void main(){
	int subVal=15;

	if(subVal++ && subVal--){
		printf("SubVal : %d\n",subVal);
	}

	if(subVal-- || ++subVal){
		printf("SubVal : %d\n",subVal);
	}

	if(subVal > subVal);{
		printf("SubVal : %d\n",subVal);
	}
}

/*
----------------------------------------------------------------------------------------------------------
output :
	SubVal : 15
	SubVal : 14
	SubVal : 14
------------------------------------------------------------------------------------------------------------
Explanation :
	subVal++ && subVal--
	15 && 16
	true(subVal=15)
	
	subVal-- || ++subVal
	15 || ++subVal
	true(subVal=14)	..........in Logical OR if one of the condition is true then the output is true

	if(subVal > subVal);   .........null statement
	
	subVal : 14		...........current value of subVal
---------------------------------------------------------------------------------------------------------------
	
*/
