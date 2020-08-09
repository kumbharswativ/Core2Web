#include<stdio.h>
int main(){
	float a = 0.7;
	if(0.7 > a)
		printf("Hi\n");
	else
		printf("Hello\n");
	return 0;
}

/*
output:
	Hi
--------------------------------------------------
Exp:
	here 0.7 is considered to be a double value
	and in internal representation of  0.7(double)
	value is greater than that of 0.7(float) value.
	so if statement return true so option a is correct
*/
