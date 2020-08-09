class COVID19{

}

class Lockdown extends COVID19{
	Lockdown(){
	//super()
	System.out.println("In constructor");
	}	
	
public static void main(String[] arg){
	Lockdown obj=new Lockdown();	//call to constructor by creating object
	System.out.println("Lockdown extended");
}
}
