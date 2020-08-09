/*
write a java program to get any number from user and
check whether the entered number is greater then or less
than or equal to zero. 
*/

import java.util.*;
class Comparison{
	public static void main(String[] arg){
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number:");
		int num=sc.nextInt();
		
		if(num>0){
			System.out.println("Entered number is greater than zero");
		}
		else if(num<0){
			System.out.println("Entered number is less than zero");
		}
		else{
			System.out.println("Enterred number is equal to zero");
		}
	}
}
