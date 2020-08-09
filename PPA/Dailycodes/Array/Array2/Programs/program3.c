#include<stdio.h>
void main(){
	int jerNo[5]={18,7,45,12,10};
	float avg[]={49.90,54.30,45.50,47.54};
	int runs[5];
	
	printf("%p\n",&jerNo);	
	printf("%p\n",&jerNo[0]);
	printf("%p\n",&jerNo[1]);
			
	printf("%p\n",&avg);
	printf("%p\n",&avg[0]);
	printf("%p\n",&avg[1]);
			
	printf("%p\n",&runs);
	printf("%p\n",&runs[0]);
	printf("%p\n",&runs[1]);		
}

/*
	%p is used to access the address of the perticular element
*/
