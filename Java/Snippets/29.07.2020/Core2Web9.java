class Parent{

}
class Core2Web9 extends Parent{
	public static void main(String[] arg){
		Parent var=new Parent();
		System.out.println(var instanceof Core2Web9);
	}
}

/*
output:
	false
---------------------------------------------------------------------------------
Exp:
	Parent is not instance of a child class
*/
