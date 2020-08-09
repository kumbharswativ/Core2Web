class BitwiseXOR{
	public static void main(String[] arg){
		int x  = 10,y = 15,ans = 0;
	/*
	 *
	 * 10 = 1010
	 * 15 = 00001111
	 * 10 | 15 = 0101  = 5 
	 *
	 */
	
	ans = x ^ y;

	System.out.println(ans);		// 5

	}
}
