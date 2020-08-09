#include<stdio.h>
void main(){
	int ilc=15, olc= 25;
	if(olc >ilc){
		printf("olc : %d\n",olc);
	}
	if(ilc<olc);{
		printf("ilc : %d\n",ilc);
	}
	printf("olc : %d\n",olc);
	printf("ilc : %d\n",ilc);
}

/*

---------------------------------------------------------------------------------------------
output:
	olc : 25
	ilc : 15
	olc : 25
	ilc : 15	
--------------------------------------------------------------------------------------------
Explanation :
		if(olc > ilc) = (25 > 15)	..........condtion is true
		so it enter into if block and prints olc :25
		
		if(ilc < olc);	............null statement
		 remaining printf statements are executed
		 
		
-------------------------------------------------------------------------------------------------
	
*/
