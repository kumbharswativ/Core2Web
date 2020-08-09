

class CoronaMaha{
	int count=170000;		//instance variable
	
	void precautions(){				// instance method
		System.out.println("kalji ghya!");
		System.out.println("count="+count);
	}
	
	static void impDecisions(){			//static method
		System.out.println("CM Decisions !");
	}
	
	public static void main(String[] a){		//static  method
		CoronaMaha jun28=new CoronaMaha();
		jun28.precautions();			// kalji ghya!  170000
		jun28.impDecisions();			//CM Decisions
		
		CoronaMaha jun29=new CoronaMaha();
		jun29.count=175000;
		jun29.precautions();			//kalji ghya!   1750000
	}
}
