class Core2web3{
	public static void leftshift(int var1,int var2)
	{
		var1 <<= var2;
	}
	public static void main(String[] args){
		int var1 = 4, var2 = 2;
		leftshift(var1,var2);
		System.out.println(var1);
	}
}

/*
Output:
	4
-------------------------------------------------------------------------------
Exp:
	Java only ever passes arguments to a methods by value(i.e a copy of the
	varible) and never by reference. Therefore the value of the variable
	var1 remains unchanged  in the main method
*/
