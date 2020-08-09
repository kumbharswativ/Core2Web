/*
Write a C Program that print Fahrenheit-to-Celsius conversion table for 0
to 100 degree F.

*/

#include<stdio.h>
void main(){
	int f;
	float c;
	while(f<=100){
		c=(f-32)*5/9;
		printf("%dF=%.2fC\n",f,c);
		f++;
	}
}
