#include<stdio.h>
void main(){
	int a=7,b=8,ans=0;
	 ans=++a + ++a + ++a;
	 printf("a=%d\tans=%d\t\n",a,ans);	//10 28
	 
	 ans=--b + --b + --b;
	 printf("b=%d\tans=%d\t\n",b,ans);	//5 17
}
