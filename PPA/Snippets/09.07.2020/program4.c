#include<stdio.h>
void main(){
	int x=3;
	int a = x++ + x++ + ++x;
	printf("%d\n",a);
}

/*
output:
	13
	
Exp:
	int x=3, because of this x will be assign with value 3
	
	consider above expression :
	a=x++ + x++ + ++x;
	
	first marked x++ will be executed as it is post increment so temp =3 
	then x will be incremented by 1 and return temp
	{
		int temp = 3; as x=3 
		x=x+1;
		x=3+1; as x=3
		x=4;  now x=4
		return temp;
	} 
	
	a=(temp + x++)+ ++x;
	
	now the next marked x++ will be executed so temp=4 then x will be 
	incremented by 1 and return temp 
	{
		int temp=4; as x=4
		x=x+1;
		x=4+1; as x=4
		x=5; now x=5
		return temp;
	}
	
	a=(3+temp)+ ++x;
	a=(3+4)+ ++x;
	a=7+ ++x;
	
	after going next ++x operator we must want to solve the brackets
	first as it contains x means current value of x will be used their
	
	{
		x=x+1;
		x=5+1;
		x=6; now x=6
		return x;
	}
	
	a=7+6
	a=13
	
	
	
	
	------------
	
	in short :
	a=x++ + x++ + ++x
	a=(x++ + x++)+ ++x
	a=3+4 + ++x
	a=7+ 6
	a=13
	
	so the value of a is 13 ie. output will be 13
	
	
	
	IMP note : use bracket properly and remember code of preincrement operator
*/
