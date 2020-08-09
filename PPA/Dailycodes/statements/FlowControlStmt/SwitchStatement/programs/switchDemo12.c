#include<stdio.h>
void main(){
	int a=10;	//Global variable
	switch(a){
	
		case 9:{
			int x=10;	//Local variable
			int y=20;	//Local variable
			printf("%d\n",x+y);
			break;
		}
		case 10:{
			int x=10;	//Local variable
			int y=20;	//Local variable
			printf("%d\n",x-y);
			break;
		}	
	}
}
/*
output:
	-10

*/
