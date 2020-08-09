#include<stdio.h>
void main(){
	int i = 3, j;
	j = i++;
	//j=i++
	//j=temp
	//j=3
	printf("%d, %d", i, j);	//4,3
}

/*
output:
	4,3
	
Exp:
	j=i++;
	here i is post incremented, hence it calls the post increment internal function 
	which returns the temp(current)value of i (which is stored in j) and increments the 
	value of i
	
	therefore value of j=3 (original value of i) and i=4(value of i after post increment)
*/
