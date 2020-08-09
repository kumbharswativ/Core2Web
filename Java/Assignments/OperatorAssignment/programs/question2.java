/*
write a code to calculate following operations between two numbers
Addition
substraction
multiplication
division
modulus
Every operation should be carried out in a separate method
*/

class ArithmaticOp{
	int n1,n2;
	
	void add(){
		System.out.println("Addition="+(n1+n2));
	}
	void sub(){
		System.out.println("Substraction="+(n1-n2));
	}
	void mul(){
		System.out.println("Multiplication="+(n1*n2));
	}
	void div(){
		System.out.println("Division="+(n1/n2));
	}
	void mod(){
		System.out.println("Modulus="+(n1%n2));
	}
	
public static void main(String[] arg){
		ArithmaticOp a=new ArithmaticOp();
		a.n1=10;
		a.n2=2;
		a.add();
		a.sub();
		a.mul();
		a.div();
		a.mod();
	}
}
