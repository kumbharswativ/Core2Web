#include<stdio.h>
void main(){
	int num=20;
	
	if(num>20){
		printf("num is greater than 20\n");
	}
	printf("num:%d\n",num);
}

/*

-----------------------------------------------------------------------------
output:
	num:20
-----------------------------------------------------------------------------
Explanation :
	num=20
	if(20>20).....this condition get false so it comes out of the if 
	block and print the statement as num:20
-----------------------------------------------------------------------------	
corrected code :

	#include<stdio.h>
	void main(){
		int num=20;
		
		if(num==20){
			printf("num is greater than 20\n");
		}
		printf("num:%d\n",num);
	}
------------------------------------------------------------------------------	
*/
