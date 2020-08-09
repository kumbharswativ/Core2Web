class Core2web8{
	public static void main(String[] args){
		int var1=10;
		int var2=20;
		
		System.out.println(!(var1>var2) && (var1>var2));
	}
}

/*
Output:
	false
------------------------------------------------------------------------------
Exp:
	!(var1>var2) = true
	(var1>var2) =false
	so that by using truth of 'and gate' true & false = false
*/
