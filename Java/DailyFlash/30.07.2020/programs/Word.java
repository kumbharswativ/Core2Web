/*
write a java program to take a any number(0-9 only)
from user(int type) and print the entered number in 
word from using switch case.
*/

import java.util.*;
class Word{
	public static void main(String[] arg){
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number:");
		int num=sc.nextInt();
		
		switch(num){
			case 0:
				System.out.println("Zero");
				break;
				
			case 1:
				System.out.println("One");
				break;
				
			case 2:
				System.out.println("Two");
				break;
				
			case 3:
				System.out.println("Three");
				break;
				
			case 4:
				System.out.println("Four");
				break;
				
			case 5:
				System.out.println("Five");
				break;
				
			case 6:
				System.out.println("Six");
				break;
				
			case 7:
				System.out.println("Seven");
				break;
				
			case 8:
				System.out.println("Eight");
				break;
				
			case 9:
				System.out.println("Nine");
				break;
				
			default:
				System.out.println("Please enter number from 0 to 9");
				break;
		}
	}
}
