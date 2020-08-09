/*
1	2	6	24	120	
	1	2	6	24	
		1	2	6	
			1	2	
				1
*/

#include<stdio.h>
void main(){
	
	for(int row=1;row<=5;row++){
		int fact=1,num=1;
		for(int space=1;space<row;space++){
			printf("\t");
		}
		for(int col=5;col>=row;col--){
			fact=fact*num;
			printf("%d\t",fact);
			num++;
		}
		printf("\n");
	}
}
