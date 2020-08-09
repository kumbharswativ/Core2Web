
class FloatDemo {

	public static void main(String[] args) {
	
		//add f or F at the end of value to stored it as float
		//type value else it will be considered as double type 
		//value.

		float f = 25.6f;		// 25.6
		
		System.out.println(f);

		double d =  25.6;
		
		System.out.println(d);		// 25.6

		if(f == d)
			System.out.println("Same values");
		else
			System.out.println("Different values"); 
	}
}
