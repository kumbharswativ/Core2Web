#include<stdio.h>
const int a=1,b=2;
void main(){
	int a=2;
	switch(a){
		case 1:
			printf("PPA ");
			break;
		case 2:
			printf("JAVA ");
			break;
	}
}

/*
output:
	JAVA
---------------------------------------------------------------
Exp:
	scope of both variable are different
		const int a=1 is a global variable and int a=2 is a local
		variable when we compile binds a of
		
		switch(a) with local a if it is available and if it is 
		not a local variable then compiler binds that a with global a
		
		here a=2 
		 so switch(a)=> switch(2) so case 2 got executed
		 hence java got printed
*/
