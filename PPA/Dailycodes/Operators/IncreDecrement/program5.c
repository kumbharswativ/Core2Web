#include<stdio.h>
void main(){
	int a=5,b=6,ans=0;
	// 5++;	lvalue required as increment operand
	
	//ans=a+++++b;		lvalue required as increment operand
	
	ans=a++ + ++b;
	printf("a=%d\tb=%d\tans%d\t\n",a,b,ans);	//6 7 12
}
