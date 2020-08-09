#include<stdio.h>
void main(){
	int a=8,ans=0;
	
	ans=++a + a++;
	printf("a=%d\tans=%d\t\n",a,ans);	//10 19
}
