/*
write a java program to check if the bitwise operators given below works on int
long, char, float, and double data types
	1.bitwise AND(&)
	2.bitwise OR(|)
	3.bitwise XOR(^)
and also write down your conclusion in the comments 
*/

class Question1{
	public static void main(String[] arg){
		int x=10,y=5;
		long a=5,b=6,ans1;
		char ch1='A',ch2='B';
		float f1=10.5f,f2=5.6f;
		double d1=5,d2=3;
		int ans;
		
		System.out.println("---------Bitwise And-----------");
		ans=x & y;
		System.out.println("x & y="+ans);	//0
		
		 ans1=a & b;
		System.out.println("a & b="+ans1);	//4
		
		ans=ch1 & ch2;
		System.out.println("ch1 & ch2="+ans);	//64
		
		//ans=f1 & f2;
		//System.out.println("f1 & f2="+ans);
		
		//ans=d1 & d2;
		//System.out.println("d1 & d2="+ans);
		
		System.out.println("---------Bitwise OR-----------");
		ans=x | y;
		System.out.println("x | y="+ans);
		
		ans=ch1 | ch2;
		System.out.println("ch1 | ch2="+ans);
		
		 ans1=a | b;
		System.out.println("a | b="+ans1);
		
		System.out.println("---------Bitwise XOR-----------");
		ans=x ^ y;
		System.out.println("x ^ y="+ans);
		
		ans=ch1 ^ ch2;
		System.out.println("ch1 ^ ch2="+ans);
		
		 ans1=a ^ b;
		System.out.println("a ^ b="+ans1);
		
		//ans=d1 & d2;
		//System.out.println("d1 & d2="+ans);
	}
}

/*
	Bitwise operators cannot be applied on Float or double type it gives error as bad operand type for '&'
*/



