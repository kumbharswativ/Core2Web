class RightShiftOp{
	public static void main(String[] arg){
		int x=20,ans=0;
		ans=x>>3;
		System.out.println("ans="+ans); //2
		
		/*
			binary representation of 20  -> 0 0 0 1 0 1 0 0
			rightshift by 3              -> 0 0 0 0 0 0 1 0   1 0 0 = 2
		*/
	}
}
