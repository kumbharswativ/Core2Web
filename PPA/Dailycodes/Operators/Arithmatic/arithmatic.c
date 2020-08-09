#include<stdio.h>
void main(){
	int a=5,b=6,c=7,ans=0;
	
	ans=a+b-c;
	printf("ans=%d\n",ans); //4          
	 /*
				       * If both the operators are having same priority then use associativity 
                                   * and execute the operation from lhs i.e operation nearest to assignment 
				   * operator are executed first otherwise operators having highest priority
			           * are executed before any other operators.
				   */
	/*
		ans=5+6-7
		ans=11-7
		ans=4
	*/
	
	ans=a*b/c;
	printf("ans=%d\n",ans); //4
	/*
		ans=5*6/7
		ans=30/7
		ans=4
	*/
	
	ans=a+b/c-a*b;
	printf("ans=%d\n",ans); //-25
	/*
		ans=5+6/7-5*6
		ans=5+0-5*6
		ans=5+0-30
		ans=5-30
		ans=-25
	*/
}
