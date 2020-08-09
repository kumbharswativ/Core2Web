/*
	write a program to find greatest number among three numbers 
	using if-else ladder.
*/


class Program3{
	public static void main(String[] arg){
		int a=10,b=39,c=22;
		
		if(a>b && a>c){
			System.out.println("Largest number is "+a);
		}
		else if(b>a && b>c){
			System.out.println("Largest number is "+b);
		}
		else if(c>a && c>b){
			System.out.println("Largest number is "+c);
		}
		else{
			System.out.println("All are equal");
		}		
	}
}
