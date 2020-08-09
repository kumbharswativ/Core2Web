/*
 write a java program with a class of name dominos with two instance 
 variable 'price' and 'quantity' declare one static varible named 'total' and static 
 method bill(). create two objects of class named as pizza and fries assign some value
 for instance variable of class and calculate the total bill and print the total cost.
*/
class Dominos{
	float price;
	int quantity;
	
	static float total,t1,t2;
	static void bill(){
		Dominos pizza=new Dominos();
		pizza.price=249;
		pizza.quantity=2;
		t1=pizza.quantity*pizza.price;
		System.out.println("Pizza Price="+pizza.price);
		System.out.println("Pizza quantity="+pizza.quantity);
		System.out.println("total cost of pizza="+t1);
		System.out.println("-----------------------------");
		
		Dominos fries=new Dominos();
		fries.price=149;
		fries.quantity=3;
		t2=fries.quantity*fries.price;
		total=fries.price*fries.quantity;
		System.out.println("Fries Price="+fries.price);
		System.out.println("Fries quantity="+fries.quantity);
		System.out.println("total cost of fries="+t2);
		System.out.println("-----------------------------");
		total=t1+t2;
		System.out.println("total cost ="+total);
	}
public static void main(String[] arg){
	
	Dominos pizza=new Dominos();
	Dominos fries=new Dominos();
	bill();
	
	
	
}
}
