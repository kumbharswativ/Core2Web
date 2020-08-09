/*
what will be the output of the following statement when a=10,b=20,c=50
	--a + ++b + c--
*/

class Question4{
public static void main(String[] arg){
	int a=10,b=20,c=50,ans=0;
	
	ans= --a + ++b + c--;
	/*
		ans=--a + ++b + c--
		ans=9 + 21 + c--
		ans=30 + 50
		ans=80
	*/
	System.out.println("ans="+ans);
	}
}
