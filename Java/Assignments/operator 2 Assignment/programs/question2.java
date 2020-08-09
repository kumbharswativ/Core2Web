/*
write a java program which will contain one number 'num'.Use the following 
operators on it and print the output.
	1.num>>>=2
	2.num<<=3
	3.num^=2
	4.num=++num
	5.num=~num 
*/

class Question2{
	public static void main(String[] arg){
		int num=10;
		
		num>>>=2;
		/*
			num=num>>>2
			 10 in binary -> 0 0 0 0 1 0 1 0 				 
			 num>>>=2     -> 0 0 0 0 0 0 1 0 1 0
			 num=2
		*/
		System.out.println(num);
		
		num<<=3;
		/*
			num=2
			num=num<<3
			2 in binary   ->        0 0 0 0 0 0 1 0
			num<<=3       ->  0 0 0 0 0 0 1 0 0 0 0
			num=16
		*/
		
		System.out.println(num);
		
		num^=2;
		/*
			num=16
			num=num^2
				16 in binary -> 0 0 0 1 0 0 0 0
				2 in binary ->  0 0 0 0 0 0 1 0
				              -------------------
				                0 0 0 1 0 0 1 0   = 18
			
		*/
		System.out.println(num);
		
		num=++num;
		/*
			num=18
			num=++num
			num=++18
			num=19
		*/
		System.out.println(num);
		
		num=~num;
		/*
			num=19
			num=~num
			num=~19
			
			19+1=20
			20 in binary	-> 0 0 0 1 0 1 0 0
			
			2's complement	-> 1 1 1 0 1 0 1 1
					   0 0 0 0 0 0 0 1
					  -----------------
					   1 1 1 0 1 1 0 0	= equivalent to -20 in binary
		*/
		System.out.println(num);		
	}
}
