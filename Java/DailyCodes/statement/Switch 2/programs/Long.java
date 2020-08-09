class Long{

	public static void main(String[] arg){
	long a = 32767;
	
	switch(a){	//error: incompatible types: possible lossy conversion from long to int

		
		case 32767:
			System.out.println("In Case 32767");
			break;
		
		case -32768:
			System.out.println("In Case -32768");
			break;
	}
 }	
}
