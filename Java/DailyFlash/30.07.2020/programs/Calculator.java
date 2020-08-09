/*
write a java program to get two numbers and one operator
from user and perform calculator operations(+,-,/,*,%) 
on numbers using switch case.
*/

import java.util.*;
class Calculator{
	public static void main(String[]  arg){

	
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter First nnumber:");
		int num1=sc.nextInt();
		
		System.out.println("Enter First nnumber:");
		int num2=sc.nextInt();
		
		System.out.println("Enter operator:");
		String str=sc.next();
		char op=str.charAt(0);
		
		
		switch(op){
			case '+':
				System.out.println("Addition is = "+(num1+num2));
				break;
				
			case '-':
				System.out.println("substraction is = "+(num1-num2));
				break;
				
			case '*':
				System.out.println("Multiplication is = "+(num1*num2));
				break;
				
			case '/':
				System.out.println("Division is = "+(num1/num2));
				break;
				
			case '%':
				System.out.println("Modulus is = "+(num1%num2));
				break;
				
			default:
				System.out.println("Enter valid data");
				break;
			
		}
	}
}
