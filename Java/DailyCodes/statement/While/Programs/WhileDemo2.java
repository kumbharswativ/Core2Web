//Write a program to print sum of digits

class WhileDemo2{
	
	public static void main(String[] arg){
		int num=135;
		int rem=0;
		int sum=0;
		while(num!=0){
			rem=num%10;
			sum=sum+rem;
			num=num/10;
		}
		System.out.println("Sum of digit:"+sum);
	}
}
