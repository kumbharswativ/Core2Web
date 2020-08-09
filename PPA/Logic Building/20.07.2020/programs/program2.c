/*
write a program to print first 5 natural numbers which are divisible by 5
*/

#include<stdio.h>
void main(){
	int cnt=0;
	for(int i=1;cnt<5;i++){
		if(i%5==0){
		printf("%d ",i);
		cnt++;
		}
	}
}
