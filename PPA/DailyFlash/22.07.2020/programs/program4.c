/*
write a program in c to make such a pattern like a pyramid with numbers 
increased by 1. use nested while loop.
  
	   1   
	  2 3  
	 4 5 6 
	7 8 9 10

*/

#include<stdio.h>
void main(){
	int i=1;
	int k=1;
	while(i<=4){
		int j=1;
		
		while(j<=7){
			if(i+j<=4 || i+j==6 || j-i>=4 || j-i==2 ||i+j==8){
				printf(" ");
			}else{
				printf("%d",k);
				k++;
			}
			j++;
		}
		i++;
		printf("\n");
	}
}
