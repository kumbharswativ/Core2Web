/*
write a java program to check whether the number is even or odd
take function like
int evenOdd(int)
*/

class EvenOdd{
	String str1,str2;
	int a,b;
	int evenOdd(int a,int b){
		str1=(a%2==0) ? "a ="+ a + "is even number":"a ="+ a +" is odd number";
		str2=(b%2==0) ? "b ="+ b+" is even number":"b ="+ b+" is odd number";
		System.out.println(str1);
		System.out.println(str2);
		return 0;
		
	}
}

class Main{
	public static void main(String[] arg){
		EvenOdd obj=new EvenOdd();
		obj.evenOdd(3,4);
	}
}
