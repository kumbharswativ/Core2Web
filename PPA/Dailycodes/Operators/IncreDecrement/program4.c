#include<stdio.h>
void main(){
	int a=5,b=6,ans=0;
	ans=a-- - b;
	printf("a=%d\tb=%d\t,ans=%d\t\n",a,b,ans);	//4 6 -1
	
	ans=--a + b;
	printf("a=%d\tb=%d\t,ans=%d\t\n",a,b,ans);	//3 6 9

}
