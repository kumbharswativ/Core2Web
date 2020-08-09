#include<stdio.h>
void main(){
	int  i=10,j=20,a=0,b=0;
	
	a=++i + j++;
	printf("a=%d\n",a);	//31
	/*
		a=++i + j++
		a=i+temp1
		a=11+20
		a=31
	*/
	
	b=i++ + ++j;
	printf("b=%d\n",b);	//33
	/*
		b=i++ + ++j
		b=temp2 + j
		b=11 + 22
		b=33
	*/
}
