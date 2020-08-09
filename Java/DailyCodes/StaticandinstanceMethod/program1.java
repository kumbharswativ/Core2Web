class Cricket{
	int match=1;
	static String capt="Virat Kohali";
	int toss=1;
	
	static void list(){
	
	//System.out.println("match="+match);   ......error:non static variable match cannot be referenced from a static context
	
	//creating a object we can use the instance variable in static method
	
	System.out.println("captain="+capt);
	
	//System.out.println("toss="+toss); .......error:non static variable toss cannot be referenced from a static context
	}
	
	void batOrBowl(){
	System.out.println("match="+match);	//1
	System.out.println("captain="+capt);	//virat kohali
	System.out.println("toss="+toss);	//1
	}
	
	public static void main(String[] arg){
	Cricket firstmatch=new Cricket();
	firstmatch.batOrBowl();
	list();	//virat kohali
	Cricket.list();	//virat kohali
	}
}
