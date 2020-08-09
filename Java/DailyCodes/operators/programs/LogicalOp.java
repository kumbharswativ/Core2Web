class LogicalOp{
	public static void main(String[] arg){
		int x=2,y=3;
		boolean ans;
		
		ans=(++x < y++) && (x++ < ++y);
		/*
			ans=(++x < y++) && (x++ < ++y);
			ans=(3 < 3) && (3 < 5)
			ans=false && true
			ans=false
		*/
		System.out.println(ans);
		
		ans=(++x <= y++) || (x++ >= ++y);
		/*
			ans=(++x <= y++) || (x++ >=++y);
			ans=(5 <= 5) || (x++ >= ++y)
			ans=true
		*/
		System.out.println(ans);
	}
}
