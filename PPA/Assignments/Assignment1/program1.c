#include<stdio.h>
void main(){
	int i=10,j=20,a=0,b=0;
	
	a=i++ + j++;
	printf("a=%d\n",a);	//30
	/*
		a=i++ + j++
		a=temp1+temp2
		a=10+20
		a=30
		
	*/
	
	b=++i + ++j;
	printf("b=%d\n",b);	//34
	/*
		b=++i + ++j
		b=i+j
		b=12+22
		b=34
	*/
}


/*

preincrement ->
preIncre(){
	a=a+1;
	return a;
}
*/

/*

postIncrement ->
postIncre(){
	temp=a;
	a=a+1;
	return temp;
}
*/
