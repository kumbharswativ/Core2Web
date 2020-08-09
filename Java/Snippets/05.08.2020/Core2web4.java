class Core2web4{
	public static void main(String[] args){
		int var1=0;
		int var2=0;
		for(int var3=0; var3<5; ++var3){
			if((++var1>2) && (++var2>2)){
				var1++;
			}
		}
		System.out.println(var1 + " " + var2);
	}
}

/*
Output:
	6 3
--------------------------------------------------------------------------------
Exp:
	In the first two iterations var1 is incremented once and var2 is not
	because of the short circuit && operator. In the third and fourth
	iterations var1 and var2 are each incremented and in the fifth iteration 
	var1 is doubly incremented and var2 is incremented. 
*/
