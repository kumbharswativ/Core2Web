class Parent{

}
class Core2Web10 extends Parent{
	public static void main(String[] arg){
		Parent var=new Core2Web10();
		System.out.println(var instanceof Parent);
	}
} 

/*
output:
	true
-------------------------------------------------------------------
Exp:
	Parent reference referring to child is an instance of 
	a parent class
*/
