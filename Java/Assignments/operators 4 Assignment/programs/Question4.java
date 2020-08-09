/*
solve the following expressions and write explanation of each 
operation along with the order of precedence
	int a=25,b=-34,c=19,d=4;
	int res=(a << 2 | b >> 3)
	boolean result=((a << 2 | b >> 3) < -10) || ((c++ << 2 & b-- >>> d) >= 23) 
*/

class Question4{
	public static void main(String[] arg){
		int a=25,b=-34,c=19,d=4;
		
		int res=(a << 2 | b >> 3);
		/*
			res=(a << 2 | b >> 3)
			 a in binary->  0000 0000 0000 0000 0000 0000 0001 1001
		left shift by 2     ->  0000 0000 0000 0000 0000 0000 0110 0100  => 100
		
		
		b in binary ->     0000 0000 0000 0000 0000 0000 0010 0010
		
		2's complement->   1111 1111 1111 1111 1111 1111 1101 1101
		                +  0000 0000 0000 0000 0000 0000 0000 0001
		                -------------------------------------------
		                   1111 1111 1111 1111 1111 1111 1101 1110
		             
		left shift by3=>   1111 1111 1111 1111 1111 1111 1111 1011 
		
		
			0000 0000 0000 0000 0000 0000 0110 0100
		        1111 1111 1111 1111 1111 1111 1111 1011
		        ---------------------------------------
		        1111 1111 1111 1111 1111 1111 1111 1111    => (-1 in binary)
		 
		*/
		System.out.println(res);
		
		boolean result =((a << 2 | b >> 3) < -10) || ((c++ << 2 & b-- >>> d) >= 23);
		/* 
		result = ((a << 2 | b >> 3) < -10) || ((c++ << 2 & b-- >>> d) >= 23);
		 result= true || ((c++ << 2 & b-- >>> d) >= 23);
		 result =true   	............................In logical OR if one conditionis true then the result is 									true
			
		
		*/
		System.out.println(result); 
	}	
	
}
