/*
what will be the output for following statement when a=10,and b=20,c=50
	a++ + ++b + ++c 
*/
class Question3{
	public static void main(String[] arg){
		int a=10,b=20,c=50,ans=0;
		ans=a++ + ++b + ++c;
		/*
			ans=a++ + ++b + ++c
			ans=10 + 21
			ans=31+51
			ans=82
		*/
		System.out.println("ans="+ans);	//82
	}
}
