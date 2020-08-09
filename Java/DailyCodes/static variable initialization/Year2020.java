/*
Initialization of instance variable is done inside the constructor
check bytecode
*/
class Year2020{
	int x=10;
	
	Year2020(){
	//x=10                ..........Initialization
		System.out.println("In constructore year2020");
	}
	
	public static void main(String[] arg){
		Year2020 obj=new Year2020();
		System.out.println("Dangerous!!!.....");
	}
}
