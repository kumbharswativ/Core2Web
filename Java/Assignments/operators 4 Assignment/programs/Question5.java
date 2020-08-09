/*
write a java code containing all the operators taught (arithmatic, logical, bitwise).
code must contain 3 classes and one main class where each class should contain at least
1 static and 1 non static methods. No operations should be performed in main class
except object creation and calling the methods 
*/

class Arithmatic{
	static int res1,res2,res4,res5,res3=1;
	int a=10,b=5;
	
	static void res(){
		System.out.println("a+b:"+res1);
		System.out.println("a-b:"+res2);
		System.out.println("a*b:"+res3);
		System.out.println("a/b:"+res4);
		System.out.println("a%b:"+res5);
	}
	
	void operations(){
		res1=a+b;
		res2=a-b;
		res3=a*b;
		res4=a/b;
		res5=a%b;	
	}
}

class Bitwise{
	int a=1,b=0;
	static int ans1,ans2;
	
	static void res(){
		System.out.println("a & b:"+ans1);
		System.out.println("a | b:"+ans2);	
	}
	void operations(){
	  ans1 = a & b;
	  ans2 = a | b;
	  
	}
}

class Logical{
	int x=2,y=3;
        static boolean ans1,ans2;
	static void res(){
		System.out.println("a && b:"+ans1);
		System.out.println("a || b:"+ans2);	
	}
	void operations(){
	  ans1=(++x < y++) && (x++ < ++y);
	  ans2=(++x <= y++) || (x++ >= ++y);
	  
	}
	
}

class Operators{
	public static void main(String[] arg){
		System.out.println("*****Arithmatic Operations*****");
		Arithmatic a =new Arithmatic();
		a.operations();
		a.res();
		System.out.println("*****Bitwise Operations*****");
		Bitwise b=new Bitwise();
		b.operations();
		b.res();
		System.out.println("*****Logical Operations*****");
		Logical l=new Logical();
		l.operations();
		l.res();
	}
}
