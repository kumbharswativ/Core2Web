/*
what will be the output of the statement if i=5, j=4
	1.(i++ >= j++) && (--j < i++)
	2.(--i < j--) || (j++ >= ++i)
*/

class Question3{
	public static void main(String[] arg){
		int i=5,j=4;
		boolean ans;
		
		ans=(i++ >= j++) && (--j < i++);
		/*
			ans=(i++ >= j++) && (--j < i++);
			ans=(5 >= 4) && (5 < 6)
			ans=true && true
			ans=true
		*/
		System.out.println(ans);
		
		
		ans=(--i < j--) || (j++ >= ++i);
		/*
			i=7, j=4
			
			ans=(--i < j--) || (j++ >= ++i);
			ans=(6 < 4) ||(3 >= 7)
			ans=false ||false
			ans=false
		*/
		System.out.println(ans);
	}
}
