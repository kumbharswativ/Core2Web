/*
write a java program to get any input character from user
and display any corresponding programming language using
switch case.(Take minimum 5 cases).
*/

import java.util.*;
class Languages{
	public static void main(String[] arg){
		
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter operator:");
		String str=sc.next();
		char ch=str.charAt(0);
		
		switch(ch){
			
			case 'J':
				System.out.println("Java");
				break;
				
			case 'C':
				System.out.println("C");
				break;
				
			case 'P':
				System.out.println("Python");
				break;
				
			case 'R':
				System.out.println("R");
				break;
				
			case 'S':
				System.out.println("swift");
				break;
				
			default:
				System.out.println("Please enter valid character");
				break;
		}
	}
}
