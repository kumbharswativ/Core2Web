/*
				1	
			1	2	3	
		1	2	3	4	5	
	1	2	3	4	5	6	7	
1	2	3	4	5	6	7	8	9
*/

#include<stdio.h>
void main(){
	
	for(int row=1;row<=5;row++){
		int num1=1;
		for(int space=4;space>=row;space--){
			printf("\t");
		}
		for(int col=1;col<=row*2-1;col++){
			printf("%d\t",num1);
			num1++;
		}
		
		printf("\n");
	}	
}
