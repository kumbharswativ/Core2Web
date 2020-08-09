/*

*/

#include<stdio.h>
void main(){
	int num=4;
	for(int row=1;row<=4;row++){
		
		for(int space=3;space>=row;space--){
			printf("\t");
		}
		for(int col=1;col<=row*2-1;col++){
			printf("%d\t",num);
			if(col>=row){
				
				num--;
			}
			else{
				
				num++;
			}
		}
		printf("\n");
	}
}
