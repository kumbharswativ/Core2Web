#include<stdio.h>
void main(){

	int x = 8,ans = 0;

	ans = ++x + x++;

	//ans = x + temp
	//ans = 10 + 9
	//ans = 19
	
	printf("x= %d ans = %d\n",x,ans);
}
