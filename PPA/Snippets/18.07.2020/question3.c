#include<stdio.h>
void main(){
	int a=1;
	
	if(a<3);	//condition is true but it is null statement so nothing will printed
	{
		printf("core2web");	//this is just a block it has nothing to do with "if" condition and will get printed
	}
	else{		//else is always immediatelt after "if", here in the  middle of "if" and "else" there is block so wlse wont't find if 
		printf("PPA");		//so it will give compile time error
	}
}
