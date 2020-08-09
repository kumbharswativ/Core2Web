#include<stdio.h>
void main(){
	int a=5,b=6,ans=0;
	ans= ++a + ++a;
	printf("a=%d\tans=%d\t\n",a,ans);	//7 14
	
	ans=++b + ++b + ++b;
	printf("b=%d\tans=%d\t\n",b,ans);	//9 25
}

