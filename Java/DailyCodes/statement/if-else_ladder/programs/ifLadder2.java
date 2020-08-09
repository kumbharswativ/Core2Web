class IfLadder2{
	public static void main(String[] arg){
		boolean a=true,b=false;
		
		if(a & b){
			System.out.println("a&b is True");
		}
		else if(a | b){
			System.out.println("a|b is True");
		}
		else{
			System.out.println("Both the conditions are false");
		}
	}
}
