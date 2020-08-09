/*
write a java program to get any number and check whether the number is
greater than or less than or equal another number.
*/

class Comparision{
	public static void main(String[] arg){
		int num1=6,num2=8;
		String str;
		
		str=(num1>num2) ? ((num1==num2)? "num1 is equal to num2" : "num1 is greater") : ((num1<num2) ? "num1 is less than num2" : "num1 is equal num2");
		
		System.out.println(str);
	}
}
