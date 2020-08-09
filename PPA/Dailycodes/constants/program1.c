//constants

#include<stdio.h>
void main(){
	const int age=45;
	printf("age=%d\n",age);
	age++;				//error: increment of read-only variable ‘age’

	printf("age=%d\n",age);
}

// we cannot increment or decrement value of constant variable
//constants value cannot be changed once we define it.
