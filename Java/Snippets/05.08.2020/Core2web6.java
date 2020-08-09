class Core2web6{
	public static void main(String[] args){
		int var1=23;
		double var2=23.5;
		boolean b=(var1=var2);
		System.out.println(b);
	}
}

/*
Output:
	Error
-----------------------------------------------------------------------
Exp:
	The code will not compile successfully. It would generate 
	error saying lossy conversion from double to int so on 
	line 7 we cannot assign variables of different data types
	from lower to higher(var1=var2) if we compare both then it
	will work fine(var1==var2)
*/
