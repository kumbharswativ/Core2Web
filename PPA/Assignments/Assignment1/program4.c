#include<stdio.h>
void main(){
	int i=10,a=0;
	
	a= ++i + ++i + ++i + ++i;
	printf("a=%d\n",a);	//51
	/*
		a= ++i + ++i + ++i + ++i
		a= i + i + ++i + ++i
		a=12 + 12 + ++i + ++i
		a=24 + i + ++i
		a=24 + 13 + ++i
		a=37 + i
		a=37 + 14
		a=51
	*/
}
