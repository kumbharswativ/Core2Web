/*
Write a Real-Time Java Program that has three classes as Indian Army,
Indian Navy & Indian Air Force, declare static & Instance Methods and Variables are
call them from main method. Moreover, draw the JVM architecture to that program
as well.

*/


class IndianArmy{
	static int totalArmedForce=1237117;
	int noOfOperations=7;
	
	static void indianArmy(){
		System.out.println("Total Armed Force="+totalArmedForce);
	}
	
	void operations(){
		System.out.println("Total operations done by Indian Army="+noOfOperations);
	}
}

class IndianNavy{
	static int totalNavy=67228;
	int noOfOperations=13;
	
	static void indianNavy(){
		System.out.println("Total Navy Force="+totalNavy);
	}
	
	void operations(){
		System.out.println("Total operations done by Indian Navy="+noOfOperations);
	}
}

class IndianAirForce{
	
	static int totalAirForce=139576;
	int noOfOperations=18;
	
	static void indianAirForce(){
		System.out.println("Total Air Force="+totalAirForce);
	}
	
	void operations(){
		System.out.println("Total operations done by Indian Air Force="+noOfOperations);
	}
}

class India{

	public static void main(String[] arg){
		IndianArmy army=new IndianArmy();
		army.indianArmy();
		army.operations();
		
		
		IndianNavy navy=new IndianNavy();
		navy.indianNavy();
		navy.operations();
		
		
		IndianAirForce air=new IndianAirForce();
		air.indianAirForce();
		air.operations();
	
	
	}
}








