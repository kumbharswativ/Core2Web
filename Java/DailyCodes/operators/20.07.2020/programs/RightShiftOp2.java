class RightShiftOp2{
	public static void main(String[] arg){
		int x = -33,ans = 0;
        /*
	  33 in binary  = 0 0 1 0 0 0 0 1 
	 
	 	         = 1 1 0 1 1 1 1 0
	 	         + 0 0 0 0 0 0 0 1
	 	         ------------------
	 	           1 1 0 1 1 1 1 1  -> -33 in binary
	 		
                 -33>>3 = 0 0 0 1 1 0 1 1 1 1 1 (right shift by 3 bits)
                  ans   = 11011 ( -5 in binary)
	 */

	ans = x >> 3;

	System.out.println("ans="+ans);		// -5
	}
}
