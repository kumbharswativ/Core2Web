#include<stdio.h>
void main(){
	int i=10,b=0;
	
	b= --i + i-- + --i;
	printf("b=%d\n",b);	//24
	/*
		b= --i + i-- + --i
		b= i +temp1 + --i
		b= 8 + 9 + --i
		b=17 + i
		b=17 +7
		b=24
	*/
	
}
