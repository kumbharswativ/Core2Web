//logical AND and OR
#include<stdio.h>
void main(){
	int x=1,y=0,ans=0;
	
	ans=x&&y;
	printf("ans=%d\n",ans);	//0
	/*
	   ans= 1 && y
	   ans=0   (if both  the bit are true then outut is true otherwise false)
	*/
	
	ans=x||y;
	printf("ans=%d\n",ans);	//1
	/*
	     ans= 1 || 0
	     ans=1 (if one of the bit is high then the output is high otherwise false)
	*/
}
