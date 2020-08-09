#include<stdio.h>
void main(){
	int year=2020;

	if(year%4==0 && year%100 != 0 || year %400 ==0 ){
		printf("%d year is leap year");
	}
}

/*
-----------------------------------------------------------------------------------------------------
output:
	Question8.c: In function ‘main’:
	Question8.c:6:12: warning: format ‘%d’ expects a matching ‘int’ argument [-Wformat=]
	    6 |   printf("%d year is leap year");
	      |           ~^
	      |            |
	      |            int
-------------------------------------------------------------------------------------------------------
Explanation:
	the 'If' condition is true, but in the print statement variable is required for the '%d'
	hence it gives error :
		printf("%d year is leap year",year);
--------------------------------------------------------------------------------------------------------
corrected code:

#include<stdio.h>
void main(){
	int year=2020;

	if(year%4==0 && year%100 != 0 || year %400 ==0 ){
		printf("%d year is leap year",year);
	}
}
-------------------------------------------------------------------------------------------------------
*/
