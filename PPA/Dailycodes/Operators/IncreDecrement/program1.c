#include<stdio.h>
void main(){
	int a=10,ans=0;
	
	//preincrement
	ans=++a;
	printf("a=%d\tans=%d\n",a,ans);	//11 11
	
	//postincrement
	ans=a++;
	printf("a=%d\tans=%d\n",a,ans);	//12 11
	
	//predecrement
	ans=--a;
	printf("a=%d\tans=%d\n",a,ans);	//11 11
	
	//postDecrement
	ans=a--;
	printf("a=%d\tans=%d\n",a,ans);	//10 11
}
