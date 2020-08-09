/*
write program and print addition of even digits and mulitiplication 
of odd digits from number

Input: 12345
Output: 
Addition of even digits :6
multiplication of odd digits : 15
*/

class Program2{
	public static void main(String[] args){
		int num=12345;
		int rem=0;
		int sum=0;
		int mul=1;
		while(num!=0){
			rem=num%10;
			if(rem%2==0){
				sum=sum+rem;
			}
			else{
				mul=mul*rem;
			}
			num=num/10;
		}
		System.out.println("Addition of even digits :"+sum);
		System.out.println("Multiplication of odd digits :"+mul);
	}
}
