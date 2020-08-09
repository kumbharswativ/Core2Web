/*
write a program and prints maximum digit from
that number.

Input:12357798
Output:
	The maximum digit from number 12357798 is 9
*/

class Program4{
	public static void main(String[] arg){
		int num=12357798;
		int num1=num;
		int rem=0;
		int var=0;
		while(num!=0){
			rem=num%10;
			if(rem>var){
				var=rem;
			}
			num=num/10;
		}
		System.out.println("The maximum digit from number "+ num1 +" is "+ var);
	}
}
