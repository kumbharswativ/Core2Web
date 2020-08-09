/*
write a program to print following 
0  0
1  -1
2  -2
3  -3
.
.
.
.
10 -10 
*/

#include<stdio.h>
void main(){
	for(int i=0,j=0;i<=10;i++,j--)
		printf("%d  %d\n",i,j);
}
