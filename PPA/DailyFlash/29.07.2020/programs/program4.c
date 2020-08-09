/*
  1	4	9	16	25	
	216	343	512	729	
		100	121	144	
			2197	2744	
				225
*/
#include<stdio.h>
void main(){
	int num=1;
	for(int row=1;row<=5;row++) {
		for(int space=1;space<row;space++){
			printf("\t");
		}
		for(int col=5;col>=row;col--){
			if(row%2>0){
				printf("%d\t",num*num);
				num++;
			}
			else{
				printf("%d\t",num*num*num);
				num++;
			}
		}
		printf("\n");
	}
}
