#include<stdio.h>
void main(){
	int x = 3;
	int a = ++x + ++x + x++;
	printf("%d\n",a); 
}

/*
output:
	15
	
Exp:
	int x=3, because of this x will be assign with value 3
	
	consider above expression :
	a=++x + ++x + x++;
	
	as normal mathematics the expression will be solved using brackets for first two 
	operands/value as mentioned above example.
	
	a=(++x + ++x)+ x++;
	
	as ++x is preincrement operator it will work as
	{
		x=x+1;
		x=3+1; as x=3
		x=4;  now x=4
		return x;
	} 
	
	a=(x + ++x)+ x++;
	
	now the next marked ++x will be executed because of this the value of x=5
	{
		x=x+1;
		x=4+1; as x=4
		x=5; now x=5
		return x;
	}
	
	a=(x+x)+ x++;
	
	after going next x++ operator we must want to solve the brackets
	first as it contains x means current value of x will be used their
	
	a=(5+5)+ x++
	a=10 + x++
	
	now the marked x++ will be executed as it is post increment operator temp=5
	x will be increment by 1 and return temp
	{
		int temp=5; as x=5
		x=x+1;
		x=5+1; as x=5
		x=6; now x=6
		return temp;
	}
	
	a=(10+x);
	
	as next their is no increment/decrement operation so bracket will be solved
	and temp will use its current value
	
	a=10+5
	a=16
	------------
	
	in short :
	a=++x + ++x + x++
	a=(++x + ++x)+ x++
	a=5+5 + x++
	a=10 + 5
	a=15
	
	so the value of a is 16 ie. output will be 15
	
	same working will be done as 3+ binary operation 
	ie. a =++x + ++x + ++x + x++
	
	IMP note : use bracket properly and remember code of postincrement operator
*/
