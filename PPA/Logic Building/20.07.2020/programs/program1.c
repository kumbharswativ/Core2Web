/*
write a program to print following

ODD : 1
EVEN : 2
ODD : 3
EVEN : 4
ODD : 5
EVEN : 6
ODD : 7
EVEN : 8
ODD : 9
EVEN : 10

*/

#include<stdio.h>
void main(){
	for(int i=1;i<=10;i++){
		if(i%2==0){
			printf("EVEN : %d\n",i);
		}else{
			printf("ODD : %d\n",i);
		}
	}
}
