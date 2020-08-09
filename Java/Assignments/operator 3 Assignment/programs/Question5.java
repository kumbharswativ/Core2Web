/*
write a java code considering your favorite sports/game i.e. either indoor or outdoor
(if more than one game make one class for each game) which must have at least one static variable,
instance variable, static method, instance method  
*/

class Kabaddi{
	static int totalPlayers=12;
	int reservedPlayers=5;
	int actualPlayers=7;
	
	static void playersCount(){
		System.out.println("Total players in Kabaddi="+totalPlayers);
	}
	
	void players(){
		System.out.println("Players in Field:"+reservedPlayers);
		System.out.println("Reserved players:"+actualPlayers);
		
	}
}
class KhoKho{
	static int totalPlayers=12;
	int reservedPlayers=3;
	int actualPlayers=9;
	
	static void playersCount(){
		System.out.println("Total players in KhoKho="+totalPlayers);
	}
	
	void players(){
		System.out.println("Players in Field:"+reservedPlayers);
		System.out.println("Reserved players:"+actualPlayers);
		
	}
}

class OutDoor{
	public static void main(String[] arg){
		Kabaddi k1=new Kabaddi();
		//System.out.println("*****Kabaddi Info*****\n");
		k1.playersCount();
		k1.players();
		
		KhoKho k2=new KhoKho();
		//System.out.println("*****KhoKho Info*****\n");
		k2.playersCount();
		k2.players();
	}	
}

