class IfLadder1{
	public static void main(String[] arg){
		int a=20;
		
		if(a>=0 && a<=10){
			System.out.println("number is between 0 and 10");
		}
		else if(a>10 && a<=20){
			System.out.println("number is between 10 and 20");
		}
		else if(a>20 && a<=30){
			System.out.println("number is between 20 and 30");
		}
		else if(a>30){
			System.out.println("number is greater than 30");
		}
		else{
			System.out.println("Please enter positive number");
		}
	}
}
