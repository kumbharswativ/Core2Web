/*
   static block executes before main block
*/


class WithoutMain{
	static{
		System.out.println("In static block");
	}
	
	public static void main(String[] arg){
		System.out.println("In main");
	}
}
