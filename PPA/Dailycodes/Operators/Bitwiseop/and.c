// Bitwise AND

#include<stdio.h>
void main(){
	int x=10,y=15,ans=0;
	ans=x&y;
	printf("ans=%d\n",ans);	//10
	
	/*
		binary representation of 10 ->   1 0 1 0
		binary representation of 15 -> & 1 1 1 1
					        -----------
					          1 0 1 0  =10 (perform logical and ie if both the input is hign then the output is 1 										otherwise 0)
	*/
}
