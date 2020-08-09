/*
write a code in java to check divisibility of a number by 2 using
bitwise operators.

note - don't use arithmatic operators to check divisibility

**************fotmat of code******************
 - write a static function isDivisible
 - integer parameters: dividend and divisor
 - return type: boolean
 - In main method:
 	take two integer variables dividend and divisor(note:divisor should be 2 as we are
 	checking divisibilty by 2)
 - call isDivisible method from if statement and print yes if the method returns true else 	      
 print no if the method returns false
*/

class Program4{
	
	static boolean isDivisible(int divident,int divisor){
		boolean flag;
		flag=((divident>>divisor)<<divisor)==divident;
		return flag;
	}
	

	public static void main(String[] arg){
		boolean res;
		Program4 obj=new Program4();
		res=obj.isDivisible(8,2);
		if(res==true){
			System.out.println("yes");
		}
		else{
			System.out.println("no");
		}	
	}

}

