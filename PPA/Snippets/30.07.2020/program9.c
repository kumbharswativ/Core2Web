#include<stdio.h>
void main(){
	double val=0;
	for(val=0.0;val<3;val++){
		printf("core2web\n");
	}
}

/*
output:
	core2web
	core2web
	core2web
---------------------------------------------------------------------------------------------
Exp:
	as val =0.0 val is of double type it will store as 0.000000
	
	as condition is val<3 then that 3 is also converted into double
	and after conversion condition will be checked 
	
	and double variable incremented by 1 means digit before point
	will get incremented
	
	1.000000+1=1.000000+1.000000=2.000000 

*/
