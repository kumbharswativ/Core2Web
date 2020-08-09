class BitwiseOR{
	public static void main(String[] arg){
		int x=10,y=15,ans=0;
	ans=x|y;
	System.out.println("ans="+ans);	//15
	
	/*
		binary representation of 10 ->   1 0 1 0
		binary representation of 15 -> | 1 1 1 1
			                      -------------
			                      	   1 1 1 1 = 15 (perform logical OR ie if one of the input is 1 then output is 									1 otherwisw 0)
	*/
	}
}
