#include<stdio.h>
void main(){
	int movie=1;
	switch(movie<<2+movie){
		default:printf("3 Idiots");
		case 4:printf("Ghajini");
		case 5:printf("Krrish");
		case 8:printf("Race");
	}
}

/*
output:
	Race
--------------------------------------------------------------------
Exp:
	The answer is Race because condition of switch is 
	movie<<2+movie = 1<<2+1 =1<<3
	
	and one leftshift three time is 1*2^3=8 
	so case 8  get executed and its the last case so we not
	provided break then also our output came as expected
	but if it was not last case then break would be must so that 
	only expected case should execute.
*/
