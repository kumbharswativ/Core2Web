class Core2web10{
	public static void main(String[] args){
		int var=10;
		System.out.println(var++ +" "+ ++var +" "+ var++);
	} 
}

/*
Output:
	10 12 12
-------------------------------------------------------------------------------
Exp:
	It performs the two pre-increment operation first i.e var=10 
	after that post-increment operaton is done but the value gets
	changed after it completes its other instructions so that 
	the var=12
*/

