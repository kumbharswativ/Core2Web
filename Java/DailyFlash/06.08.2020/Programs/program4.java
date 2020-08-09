/*
write a java program to take 100 value from user and print the reverse order 
of that particular number and also check which number is divisible by 5

Input: 
	Enter the value:100
Output:
	Reverse order
	100,99,98............
	Divisible by 5 is 
	100,95,90,............
*/

import java.util.*;
class Program4{
	public static void main(String[] arg){
		int inum;
		
		Scanner sc=new Scanner(System.in); 
		System.out.println("Enter a number:");
		inum=sc.nextInt();
		
		System.out.println("Reverse Order:");
		
		for(int j=inum;j>=1;j--){
			System.out.print(j+" ");
		}
		
		System.out.println(" ");
		System.out.println("Divisible by 5 is:");
		for(int i=inum;i>=1;i--){
			if(i%5==0){
				System.out.print(i+" ");
			}
		}
	}
}



