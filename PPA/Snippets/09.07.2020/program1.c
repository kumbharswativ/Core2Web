#include<stdio.h>
void main(){
	int x = 3;
	int a = x++ + x++ + x++;
	printf("%d\n",a);
}

/*
Output:
	12
	
	
Exp:
	int x=3, because of this x will be assign with value 3
	
	consider above expression :
	
	a=x++ + x++ + x++;
	
	as normal mathematics the expression will be solved using brackets for first two operands/values 
	for e.g.
	ans=10+20+30+40
	
	1. 10 and 20 will be solved first 
	   ans=(10+20)+30+40
	   ans=(30)+30+40
	   
	2. new answer 30 and 30 will be solved
	   ans=(30+30)+40
	   ans=60+40
	   
	3. new answer 60 and 40 will be solved
	   ans=60+40
	   ans=100
	   
	   same happen in the programming language expression
	   
	   a=x++ + x++ + x++;
	   
	1. the first two operands will be solved in brackets
	    a=(x++ + x++)+ x++
	    
	    as x++ is post increment operator it will work as 
	    {
	    	int temp=x; current value of x is stored in temp variable
	    	x=x+1; then x value will be incremented as 1
	    	  return temp; then the temp variable is returned means temp value is used in that post increment line
	    
	    }
	    
	    a=(x++ + x++)+ x++; x=3
	    temp=0
	    
	    the first x++ will be execute (marked location),because oof this value of temp=3 and x=4
	    {
	    	int temp=3 as x=3 
	    	x=x+1
	    	x=3+1
	    	x=4 now x=4
	    	return temp;
	    } 
	   
	   so at marked location value temp = 3 will be returned
	   
	   a=(3+ x++)+ x++
	   
	   the next x++ will be executed because of this value of temp = 4 and x = 5
	   {
	   	int temp = 4 as x = 4
	   	x=x+1
	   	x=4+1
	   	x=5  now x=5
	   	return 5 
	   }  
	   
	   a = (3+4)+ x++
	   a = 7 + x++
	   
	   now again first two operand/value is solved using brackets
	   a=(7 + x++)
	   
	   the marked x++ will be executed because of this value of temp = 5 and x = 6
	   {
	   	int temp=5 as x=5
	   	x=x+1
	   	x=5+1
	   	x=6  now x=6
	   	return temp;
	   }
	   
	   a=(7+5)
	   a=12
	   
	   ------------------
	   in short:
	   a = x++ + x++ + x++
	   a = (x++ + x++)+ x++
	   a = (3+4)+ x++
	   a = 7 + x++
	   a = 7+5
	   a = 12
	   
	   so the value of a is 12 ie output will be 12
	   
	   same working will be done as 3+ binary operations
	   ie a = x++ + x++ + x++ + x++ + x++
	   
	   IMP note : use brackets properly and remember code of post increment operator
*/
