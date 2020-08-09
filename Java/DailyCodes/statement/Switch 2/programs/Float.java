class Float{

	public static void main(String[] arg){
	float f = 5.6;	//error: incompatible types: possible lossy conversion from double to float
	
	switch(f){	//error: incompatible types: possible lossy conversion from float to int
		
		case 3.2:
			System.out.println("In Case 3.2");
			break;
		
		case 5.6:
			System.out.println("In Case 5.6");
			break;
	}
 }	
}
