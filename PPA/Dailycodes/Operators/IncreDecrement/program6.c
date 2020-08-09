#include<stdio.h>
void main(){
	int a=5,b=6,c=7,ans=0;
	ans=++a + b++ + ++c;
	printf("a=%d\tb=%d\tc=%d\tans=%d\t\n",a,b,c,ans);	//6 7 8 20
}
