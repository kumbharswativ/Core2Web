/*
write a java program for following operations and explain the error if any
	1.num=28,result=num>>>4
	2.num=255,result=num<<<3
	3.num=-108,result=num>>>23
	3.num=-123,result=num<<<15
*/

class Question3{
	public static void main(String[] arg){
		int num1=188,num2=255,num3=-108,num4=-123,res;
		
		res=num1>>>4;
		System.out.println(res);	//11
		
		//res=num2<<<3;		...............we cannot use unsigned left shif (<<<) operator for left shift 									operator otherwise it gives error
		//System.out.println(res);
		
		res=num3>>>23;
		System.out.println(res);	//511
		
		//res=num4<<<15;
		//System.out.println(res);
	}
}
