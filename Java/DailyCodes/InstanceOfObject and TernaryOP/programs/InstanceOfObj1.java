// Instanceof is used to check whether the object or reference belongs to the specified class or not.


class Cricket{
	public static void main(String[] arg){
		Cricket test=new Cricket();
		Cricket T20=new Cricket();
		Cricket oneDay=new Cricket();
		Cricket thirty5=null;
		
		System.out.println(test instanceof Cricket);	//true
		System.out.println(T20 instanceof Cricket);	//true
		System.out.println(oneDay instanceof Cricket);	//true
		System.out.println(thirty5 instanceof Cricket);	//false
		
	}
}
