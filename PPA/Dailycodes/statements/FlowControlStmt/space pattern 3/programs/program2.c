/*

			1	
		1	2	1	
	1	2	3	2	1	
1	2	3	4	3	2	1
*/


#include<stdio.h>
void main(){
	for(int row=1;row<=4;row++){
		int x=1;
		for(int space=3;space>=row;space--){
			printf("\t");
		}
		for(int col=1;col<=row*2-1;col++){
			printf("%d\t",x);
			if(col>=row){
				x--;
			}
			else{
				x++;
			}
		}
		printf("\n");
	}
}
