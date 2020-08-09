/*
print following table

	i	j
	0.00    0.00
	0.20    -0.20
	0.40    -0.40
         .
         .
         .
         .
       1.80     -1.80    
*/

#include<stdio.h>
void main(){
	float i=0.00;
	float j=0.00;
	printf("i\tj\n");
	for(int n=1;n<=10;n++,i+=0.20,j-=0.20){
		printf("%.2f\t%.2f\n",i,j);
	}
}
