class BitwiseNOT1{
public static void main(String[] arg){
	int a=56;
	System.out.println("a="+~(a));


/*
	56 in binary ->    0 0 1 1 1 0 0 0
	56+1	     -> +  0 0 0 0 0 0 0 1
			 ---------------------
			   0 0 1 1 1 0 0 1	= 57
			   
	------------------------------------------------
	perform 2's compliment of 57:
	------------------------------------------------
	
	1's compliment of 57 -> 1 1 0 0 0 1 1 0
	add binary 1         -> 0 0 0 0 0 0 0 1
	                       ------------------	   
			         1 1 0 0 0 1 1 1  =-57   (first bit in MSB represents the sign bit....when it is 1 then it 									indicates negative otherwise positive)
*/

}
}
