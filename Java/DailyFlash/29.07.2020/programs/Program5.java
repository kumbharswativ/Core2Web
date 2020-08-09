/*
write a code in java to check whether a number is odd or even
using bitwise operator and not using arithmatic operator
**************fotmat of code******************
 - write a static method isEven
 - integer parameters: number
 - return type: integer
 - In main method:
 	take a hardcoded number and inside an if statement call the isEven() method
 	If the method is returning a zero then print Even else print Odd
*/

class Program5{
	
	static boolean isEven(int num){
	boolean result;
		result=((num>>2)<<2)==num;
		return result;
	}
	

	public static void main(String[] arg){
		boolean res;
		Program5 obj=new Program5();
		res=obj.isEven(100);
		if(res==true){
			System.out.println("Even");
		}
		else{
			System.out.println("Odd");
		}	
	}

}

