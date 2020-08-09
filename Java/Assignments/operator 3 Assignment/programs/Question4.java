/*
write a java program to check if the bitwise operator ~ (complement) works with operands 
with data types int, long, float, double and char 
*/

class Question4{
	public static void main(String[] arg){
		int i=5;
		long l=3;
		//float f=3.5f;
		//double d=23.10;
		char ch='A';
		
		System.out.println("i="+~(i));
		/*
			i=5
			5 in binary   ->   0 0 0 0 0 1 0 1
			
			5+1=6         ->   0 0 0 0 0 1 1 0
			
			2's complement ->  1 1 1 1 1 0 0 1
			                 + 0 0 0 0 0 0 0 1
			                 ------------------
			                   1 1 1 1 1 0 1 0	-> -6 in binary
		*/
		System.out.println("l="+~(l));
		/*
			l=3
			3 in binary  -> 0 0 0 0 0 0 1 1
			
			3+1=4         -> 0 0 0 0 0 1 0 0
			
			2's complement-> 1 1 1 1 1 0 1 1
			                +0 0 0 0 0 0 0 1
			                -----------------
			                 1 1 1 1 1 1 0 0    -> -4 in binary
		*/
		
		//System.out.println("f="+~(f));	error: bad operand type float for unary operator '~'

		//System.out.println("d="+~(d));	error: bad operand type double for unary operator '~'

		System.out.println("ch="+~(ch));
		/*
			ch='A'   i.e ch = 65(ASCII value)
			
			65 in binary    ->  0 1 0 0 0 0 0 1
			
			65+1=66         ->  0 1 0 0 0 0 1 0
			
			2's complement   ->  1 0 1 1 1 1 0 1
				           +  0 0 0 0 0 0 0 1
				           --------------------
				              1 0 1 1 1 1 1 0    -> -66 in binary
		*/
	}
}
