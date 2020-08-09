class Core2web9{
	public static void main(String[] args){
		int var1=5;
		int var2=-5;
		System.out.println((~(~var1)));
		System.out.println(~var2);
	}
}

/*
OUtput:
	5
	4
-------------------------------------------------------------------
Exp:
	This unary operator returns the one's complement representation
	of the input value or operand i.e with all bits inverted means
	it makes every 0 to 1 and every 1 to 0. 

*/
