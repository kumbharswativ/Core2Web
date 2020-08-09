class Core2web {
	public static void main(String[] args){
		int var1=20;
		int var2=++var1;		//21
		int var3=var2++;		//21
		int var4=var1--;		//21
		
		int var5 = ++var1 + var2++ - --var2 + ++(var1++);	//(21 + 21 - 20 + 22) =44
		
		System.out.println(var5);
	}

}

/*
Output:
	45
--------------------------------------------
Exp:
	++(var1++) is error-prone statement
*/
