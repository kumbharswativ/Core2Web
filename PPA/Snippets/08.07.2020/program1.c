#include<stdio.h>
void main(){
	int i=10,j=10,k;
	k = ++ i + j ++;
	/*
		k=++i + j++
		k=11 + 10
		k=21
	*/
	printf("%d, %d, %d",i, j, k);	//11 11 21
	
}
/*
output:
	11, 11, 21

Exp:
	k=(++i + j++)
	when you go from left to right on the above line after(=)
	++i occurs first which first increments i and returns its reference
	
	then j++ occurs which calls the post increment function and returns current 
	value of j as temp and increases its actual value
	
	k=(reference of i after increment + temp value of j as before increment) = (11+10)=21
	
	now as i and j are both incremented the value for both = previous value + 1 =(10+1)= 11;
	hence option c.
	
*/
