#include<stdio.h>
void main(){
	bool val=false; 
	bool var=true;
	if(val);{
		printf("true");
	}
	if(var){
		printf("false");
	}
}

/*
------------------------------------------------------------------------------------------------------------
output:
	Question4.c: In function ‘main’:
	Question4.c:3:2: error: unknown type name ‘bool’
	    3 |  bool val=false, var=true;
	      |  ^~~~
	Question4.c:3:11: error: ‘false’ undeclared (first use in this function); did you mean ‘fclose’?
	    3 |  bool val=false, var=true;
	      |           ^~~~~
	      |           fclose
	Question4.c:3:11: note: each undeclared identifier is reported only once for each function it appears in
	Question4.c:3:22: error: ‘true’ undeclared (first use in this function)
	    3 |  bool val=false, var=true;
	      |                      ^~~~

---------------------------------------------------------------------------------------------------------------
Explanation :
	Boolean is defined as-
			_Bool val=0;
			_Bool var=1;
	Here, 0 is for false and 1 is for true
----------------------------------------------------------------------------------------------------------------
corrected code:

#include<stdio.h>
void main(){
	_Bool val=0; 
	_Bool var=1;
	if(val);{					//null statement
		printf("true");			//true
	}
	if(var){
		printf("false");			//false
	}
}
-----------------------------------------------------------------------------------------------------------------	
*/
