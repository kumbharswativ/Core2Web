/*
 * //Wrapper Classes:
 * The Wrapper class Wraps a value of primitive data type in an object
 * to help it interact with other classes.
 * An Object of wrapper class contains a single field whose type is primitive
 * data type.
 * Wrapper classes in java are:  Integer,Float,Double,Short,Long,Character,
 * 				Byte
 */


import java.lang.*;

class SizeDemo {


	public static void main(String[] args) {
	

		System.out.println(Byte.SIZE/8);	// 1

       		System.out.println(Short.SIZE/8);	// 2
		
		System.out.println(Integer.SIZE/8);     // 4

		System.out.println(Long.SIZE/8);	// 8
		
		System.out.println(Float.SIZE/8);       // 4
		
		System.out.println(Double.SIZE/8);	// 8 
		
		System.out.println(Character.SIZE/8);   // 2


		/*
		 * It will give error as the size of boolean is JVM Dependent
		 * System.out.println(boolean.SIZE/8);
		 */ 
	}

}
