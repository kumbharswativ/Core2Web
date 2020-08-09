class Program2{
	public static void main(String[] arg){
		char ch='A';
		char x;
		
		if(ch>='A'|| ch<='Z'){
			x='A'+32;
			System.out.println(x);
		}
		else{
			x='a'-32;
			System.out.println(x);
		}
	}
}
