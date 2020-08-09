#include<stdio.h>
void main(){

	int x = 5,y =  6,ans = 0;

	ans = ++x && y++;
	//ans = x + temp
	//ans = 6 + 6
	//ans = 1               (as x and y both are true so ans is true) 
	
	printf("%d %d %d\n",x,y,ans); // 6 7 1
}
