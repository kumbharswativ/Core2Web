/*
write a program to count number of digits 
in a number.

Input:12345
Output:5
*/


class Program1{
	public static void main(String[] args){
		int num=12345;
		int rem=0;
		int count=0;
		while(num!=0){
			rem=num%10;
			count=count+1;
			num=num/10;
		}
		System.out.println("number of digits:"+count);
	}
}
