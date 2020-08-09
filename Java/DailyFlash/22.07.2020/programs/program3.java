/*
write a program to check that user is eligible for voting or not using ternary operator
*/

class Voting{
	public static void main(String[] args){
		int age1 = 29;
		int age2 = 15;
		String res = null;
		
		res = (age1>18)?("Your age is "+age1+" hence you are eligible for voting"):("your age is "+age1+" hence you are not eligible for voting");
		System.out.println(res);
		
		res = (age2>18)?("Your age is "+age2+" hence you are eligible for voting"):("your age is "+age2+" hence you are not eligible for voting");
		System.out.println(res);
	}
}
