/*
find the number is eben or odd using ternary operator
Input: 10
Output:10 is even
*/

class Ternary{
	public static void main(String[] args){
		int num = 10;
		
		String res = null;
		
		res = (num%2==0)?(num+" Is Even"):(num+(" Is ODD"));
		System.out.println(res);
		
		 		
	}
}
