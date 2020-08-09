import java.lang.*;

class Climate {

	String Home = "Everyone stays at home";		// instance variable
	static String Cyclone = "Cyclone in the city";         //static variable
	String City = "City Destroyed";                 //instance variable

	//instance method
	
	void cycloneMiss(){        

		System.out.println("Safe from the Cyclone...");
	
	}

	//static method 

	static void cycloneHit(){
	
		System.out.println("Permanent damaged to the environment...");
	}

}
class Causes {

	public static void main(String[] args){
	        
		//Object of class Climate is created.
		Climate obj = new Climate();  

		//call to cycloneMiss() method using object
		obj.cycloneMiss();				//Safe from the Cyclone...

		System.out.println(obj.Home);                   //everyone stays at home"

		System.out.println(obj.City);			//Cyclone in the city

		System.out.println(obj.Cyclone);                //City Destroyed

		System.out.println(Climate.Cyclone);            //City Destroyed

		//call to cycloneHit() method using object     
		obj.cycloneHit();                              //Permanent damaged to the environment...

		//call to cycloneHit() method using classname
		Climate.cycloneHit();                          //Permanent damaged to the environment...
	}
}
