class Core2web4{
	public static void main(String[] args){
		int var1=10;
		int var2 = ++var1 + ++var1;	//11+12=23
		System.out.println(var1);	//12
		System.out.println(var2);	//23	
	} 
}

/*
Output:
	12
	23
--------------------------------------------------
Exp:
	If you run same code in c you get
	12 24 but in java this is simple. 
*/
