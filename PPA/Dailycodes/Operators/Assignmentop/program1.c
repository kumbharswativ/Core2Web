#include<stdio.h>
void main(){
	int x=6,y=3;
	
	x+=y;
	printf("x=%d\n",x);	//9
	/*
		6+=3
		6=6+3
		9
	*/
	
	x-=y;
	printf("x=%d\n",x);	//6
	/*
		9-=3
		9=9-3
		6
	*/
	
	x*=y;
	printf("x=%d\n",x);	//18
	/*
		6*=3
		6=6*3
		18
	*/
	
	x/=y;
	printf("x=%d\n",x);	//6
	/*
		18/=3
		18=18/3
		6
	*/
	
	x%=y;
	printf("x=%d\n",x);	//2
	/*
		6%=3
		6=6%3
		2
	*/
}
