/*
write a java program to get input RTO code from user
and show corresponding indian state.
name using switch case(Take minimum 5 cases)
*/

import java.util.*;
class RTO{
	public static void main(String[]  arg){
		Scanner sc= new Scanner(System.in);
		System.out.println("Enter a RTO code");
		String str= sc.nextLine();  
		
		switch(str){
			case "AP":
				System.out.println("Andra-Pradesh");
				break;
				
			case "MH":
				System.out.println("Maharashtra");
				break;
				
			case "CG":
				System.out.println("chattisgarh");
				break;
				
			case "KA":
				System.out.println("Karnataka");
				break;
				
			case "LA":
				System.out.println("Ladakh");
				break;
				
			default:
				System.out.println("Please enter valid RTO code");
				
				
		}
	}
}
