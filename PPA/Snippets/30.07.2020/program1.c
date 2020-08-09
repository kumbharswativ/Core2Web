#include<stdio.h>
void main(){
	short a;
	for(a=1;a>=0;a++){
		printf("Core2web\n");
	}
}

/*
output:
	core2web will print 32767 times
----------------------------------------------------------------
Exp:
	short a;
	
	The size of short is 2 bytes so limit of short a is from 
	-32768 to 32767
	
	as we moving for loop from a = 1 to(a>=0) and we are 
	incrementing the a variable ie(a=a+1) as we know it will
	goes into infinite loop
	
*/
