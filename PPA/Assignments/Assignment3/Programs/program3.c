#include<stdio.h>
void main(){
	int a=-1;
	
	if(~a){
		printf("Hello\n");	//out of if block
	}
	
	
	
	/*
	  a=-1
	  
	    representation of 1 in binary =  0 0 0 0 0 0 0 1
	    
	    				      1 1 1 1 1 1 1 0
	    				      0 0 0 0 0 0 0 1
	    				    -------------------
	    				      1 1 1 1 1 1 1 1   =  reprentation of binary -1
	    				      
	    	
	    	~(-1) = 0 0 0 0 0 0 0 0 = 0 	.......1's compliment of -1   (false)
	    	
	    	
	*/
}
