/*
what will be the output of the following statement when a=10,b=20,c=50
	a++ + --b + c--
*/

class Question5{
	public static void main(String[] arg){
		int a=10,b=20,c=50,ans=0;
		ans=a++ + --b + c--;
		/*
			ans=a++ + --b + c--;
			ans=10 + 19
			ans=29 +50
			ans=79
		*/
		
		System.out.println("ans="+ans);
		
	}
}
