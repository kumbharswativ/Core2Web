/*
 what will be the output of the following statement if num=10, num2=5
 (num1++ | num2) & ((++num2)^num1)
 and also write the precedence of the operators you came across till now 
*/

class Question3{
	public static void main(String[] arg){
		int num1=10,num2=5,ans;
		
		ans= (num1++ | num2) & ((++num2)^num1);
		System.out.println("ans="+ans);
		
	}
}
