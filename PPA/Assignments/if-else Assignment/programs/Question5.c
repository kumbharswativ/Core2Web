#include<stdio.h>
void main(){
	float x=5.2, y=10.5;
	
	if(x == 5.2){
		printf("x : %d\n",x);
		
		
	if(y == 10.5);{
		printf("y : %d\n",y);
	}
}

/*
-----------------------------------------------------------------------------------------------------
output:
	Question5.c: In function ‘main’:
	Question5.c:6:16: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘double’ [-Wformat=]
	    6 |   printf("x : %d\n",x);
	      |               ~^    ~
	      |                |    |
	      |                int  double
	      |               %f
	Question5.c:9:16: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘double’ [-Wformat=]
	    9 |   printf("y : %d\n",y);
	      |               ~^    ~
	      |                |    |
	      |                int  double
	      |               %f
	Question5.c:11:1: error: expected declaration or statement at end of input
	   11 | }
	      | ^
-----------------------------------------------------------------------------------------------------------------
Explanation :

	1. If we don't want to lose float data we have to give it %f as format specifier %d is given 
		
	2. at the end of 1st if block closing curly brace is reqiured(}).		
----------------------------------------------------------------------------------------------------------------
corrected code :

#include<stdio.h>
void main(){
	float x=5.2f, y=10.5f;
	
	if(x == 5.2f){
		printf("x : %f\n",x);			//x:5.2
		
	}	
	if(y == 10.5f);{				//null statement
		printf("y : %f\n",y);			//y:10.5
	}
}
--------------------------------------------------------------------------------------------------------------------
*/
