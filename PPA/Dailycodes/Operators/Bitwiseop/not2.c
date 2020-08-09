//bitwise not(negative number)

#include<stdio.h>
void main(){
	int a=-16;
	printf("a=%d\n",~(a));	//15
}
/*

	16 in binary      -> 0 0 0 1 0 0 0 0
	subtract binary 1 -> 0 0 0 0 0 0 0 1
			    ------------------
			      0 0 0 0 1 1 1 1  = 15
*/			      
