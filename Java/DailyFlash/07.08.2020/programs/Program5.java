/*
write a program and prints the average of all the number

Inputs:12345
Output:The average of digits from number 12345 is 3 
*/

class Program5{
	public static void main(String[] args){
		int num=12345;
		int num1=num;
		int rem=0;
		int count=0;
		int avg=0;
		int sum=0;
		
		while(num!=0){
			rem=num%10;
			count++;
			sum=sum+rem;
			num=num/10;
		}
		avg=sum/count;
		System.out.println("The average of digits from number "+num1+" is "+avg);
	}
}	
