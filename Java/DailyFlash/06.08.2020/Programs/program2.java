/*
Write a java program which accepts the student year and student marks & using that student year and student
marks it will check student  is eligible or not for education scholorship by help of nested switch case
condition : in 1st switch case take parameter as student year and other inner/nested.
switch case take parameter as  student marks. 1st and 2nd year student are not eligible for education
scholorship only 3rd year student eligible for education scholorship

Input:
	Student year:3
	Student marks:80
Output:
	student eligible for education scholorship.
*/


import java.util.*;
class Student{
	
	public static void main(String[] args){
		
		int iyear;
		
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Student Year:");
		iyear=sc.nextInt();
		
		switch(iyear){
			
			case 1:
				System.out.println("student is not eligible for education scholorship");
				break;
			
			case 2:
				System.out.println("student is not eligible for education scholorship");
				break;
				
			case 3:
				{
					int imarks;
					int iflag;
					
					System.out.println("Enter Student Marks:");
					imarks=sc.nextInt();
					
					if(imarks<40){
						iflag=0;
					}else{
						iflag=1;
					}
					
					
					switch(iflag){
						
						case 1:
							System.out.println("student is eligible for education scholorship");
							break;
							
						case 0:
							System.out.println("student is not eligible for education scholorship");
							break;
							
								
						default:
							System.out.println("Please enter valid data");
							break;	
					}
					
					break;
				}
			
			default:
				System.out.println("Please enter valid data");
				break;
			
		}
	}
}
