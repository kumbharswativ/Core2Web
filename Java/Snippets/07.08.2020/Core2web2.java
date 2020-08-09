class Core2web2{
	public static void main(String[] args){
		double var1=20.5;
		double var2=var1++;			
		System.out.println(var2);			//20.5
		double var3=++var1;				
		System.out.println(var3);			//22.5
	}
}

/*
Output:
	20.5
	22.5
-------------------------------------------------------------------------
Exp:
	1st Operation used is postincrement therefore var2 = 20.5 
	and var1=21.5 and 2nd operation is preincrement var3=22.5 
	that is var1=22.5
*/
