#include<stdio.h>
void main(){
	int a=1;
	
	if(a<3);		//condition is true but it is null statement(line)so nothing will be printed
	{
		printf("core2web");	//this is just a block it has nothing to do with if condition and will get printed
	}
	if(a==1){		//as this condition is true "PPA" will be printed
		printf("PPA");
	}
}
