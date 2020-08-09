//Bitwise OR

#include<stdio.h>
void main(){
	int x=10,y=15,ans=0;
	ans=x|y;
	printf("ans=%d\n",ans);	//15
	
	/*
		binary representation of 10 ->   1 0 1 0
		binary representation of 15 -> | 1 1 1 1
			                      -------------
			                      	   1 1 1 1 = 15 (perform logical OR ie if one of the input is 1 then output is 1 otherwisw 0)
	*/
}
