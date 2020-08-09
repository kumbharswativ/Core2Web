// leftshift operator

#include<stdio.h>
void main(){
	int x=10,ans=0;
	ans=x<<2;
	printf("ans=%d",ans);	//40
	
	/*
		binary representation of 10 -> 0 0 0 0 1 0 1 0
		left shift by 2 bit         -> 0 0 1 0 1 0 0 0   = 40
	*/
}
