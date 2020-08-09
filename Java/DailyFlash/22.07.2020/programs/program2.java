/*
	write 2 classes on instagram and facebook. write one static method one instance method
	in instagram class static method should check the object belongs to class instagram or not using 
	a ternary operator call that method on the class name and pass the object of the instagram class.
	write the main method in the facebook class and create as instagram object .
*/

class Instagram{
	boolean res;
	String ans;
	
	static void check(Instagram insta){
		insta.ans = (insta.res= insta instanceof Instagram)  ?  "Given Object Is An Instance Of Instagram Class = true" : "Given Object Is An Instance Of Instagram Class = False";
		System.out.println(insta.ans);
	}
}

class Facebook{
	public static void main(String[] args){
		Instagram Insta = new Instagram();
		Insta.check(Insta);
	}
}
