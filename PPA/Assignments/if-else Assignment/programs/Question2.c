#include<stdio.h>
void main(){
	int a=10,b=20;

	if((a && b++) && (a++ || ++b)){
		printf("a : %d\n",a);
		printf("b : %d\n",b);
	}
	printf("out of if");
}

/*

-------------------------------------------------------
output:
	a : 11
	b : 21
	out of if
--------------------------------------------------------
Explanation :
	
	a && b++
	10 && 20 	.........true(a=10,b=21)
	
	a++ || ++b
	10  || ++b	..........true(a=11,b=21)
	
 	((a && b++) && (a++ || ++b))
 	true && true
 	true
 	
 	hence, it will enter into the if block and execute it 
 	and also executes the statements out of the if block
-------------------------------------------------------------------	
*/
