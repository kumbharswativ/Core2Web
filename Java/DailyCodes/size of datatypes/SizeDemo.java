/*
    Finding the size of datatypes by using the wrapper class 
*/

class SizeDemo{
	public static void main(String[] arg){
		System.out.println(Byte.SIZE/8); //18
		System.out.println(Integer.SIZE/8);//4
		System.out.println(Short.SIZE/8);//2
		System.out.println(Long.SIZE/8);//8
		System.out.println(Character.SIZE/8);//2
		System.out.println(Float.SIZE/8);//4
		System.out.println(Double.SIZE/8);//
		//System.out.println(Boolean.SIZE/8);......Boolean size is dependent by JVM
	}
}
