#include<stdio.h>
void main(){
	int i=10,j=20,k=30,a=0,b=0;
	
	a=++i + j++ + k++;
	printf("a=%d\n",a);	//61
	/*
		a=++i + j++ + k++
		a=i + temp1 + k++
		a=11 + 20 + temp2
		a=31 + temp2
		a=31 + 30
		a=61
	*/
	
	b=i++ + ++j + ++k;
	printf("b=%d\n",b);	//65
	/*
		b=i++ + ++j + ++k
		b=temp3 + j + ++k
		b=11 + 22 + ++k
		b=33 + k
		b=33 + 32
		b=65
	*/
}
