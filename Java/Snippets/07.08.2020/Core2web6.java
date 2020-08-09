class Core2web6{
	public static void main(String[] args){
		int var1=10;
		int var2=20;
		
		int var3 = var1 && var2;
		System.out.println(var3);
	}
}

/*
Output:
	compile time error
-------------------------------------------------------------------------
Exp:
	In java &&, ||, ! these logical operators can only perform
	on the boolean operands.
*/
