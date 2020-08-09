/*
0	1	1	2	3	
	5	8	13	21	
		34	55	89	
			144	233	
				377
*/

#include<stdio.h>
void main(){
	int num1=0,num2=1,num3=0;
	for(int row=1;row<=5;row++){
		
		for(int space=1;space<row;space++){
			printf("\t");
		}
		for(int col=5;col>=row;col--){
			printf("%d\t",num1);
			num3=num1+num2;
			num1=num2;
			num2=num3;
		}
		
		printf("\n");
	}
}
