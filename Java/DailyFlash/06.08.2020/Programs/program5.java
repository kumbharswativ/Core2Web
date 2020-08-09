/*
write a java program to print the table of 3 
and also check whichh numbers are even in that 
table.

Input:
	Enter the number:3
Output:
	Table of 3 is
	3 6 9 12....................
	Even numbers pressent in table
	6,12,18.................
*/

class Program5{
	public static void main(String[] args){
		System.out.println("Table of 3 :");
		for(int i=1;i<=10;i++){
			System.out.print(i*3+" ");
			
		}
		System.out.println(" ");
		System.out.println("Even Numbers present in table");
		for(int j=1;j<=10;j++){
			int  mul=j*3;
			if(mul%2==0){
				System.out.print(mul+" ");
			}
		}
		
	}
}
