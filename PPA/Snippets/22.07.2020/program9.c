#include<stdio.h>
void main(){
	int a=3,b=2;
	
	a=a==b==0;
	switch(1){
		a=a+10;
	}
	sizeof(a++);
	printf("%d",a);
}

/*
output:
	1
-----------------------------------------------------------
Exp:
	The answer is 1 because after evaluation the statement
	a=a==b==0 i.e a=3==2==0 i.e a=0==0 therefore a stores 
	1 and in sizeof (a++) only sizeof variable is calculated
	neither pre nor post increment is evaluated and thus
	the answer of a is 1.
*/
