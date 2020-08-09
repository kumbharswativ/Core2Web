/*
			1	
		8	1	4	
	27	8	1	4	9	
64	27	8	1	4	9	16
*/

#include<stdio.h>
void main(){
	int num=1;
	for(int row=1;row<=4;row++){
		for(int space=3;space>=row;space--){
			printf("\t");
		}
		for(int col=1;col<=row*2-1;col++){
			if(col>=row){
				printf("%d\t",num*num);
				num++;
			}
			else{
				printf("%d\t",num*num*num);
				num--;
			}
		}
		printf("\n");
	}
}
