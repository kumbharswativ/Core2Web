/*
write two classes as pune,mumbai. Add the followinng thing:
class pune:
	static variable:int covidActiveCases
	instance variable:int totalCases
	static method:noCorona
	instance method:lockdown
		         noLockdown
		         
class Mumbai:
	static variable:int covidActiveCases
	instance variable:int totalCases
	static method noCorona
	instance method:lockdown
			 noLockdown
			 
increment both the variables in non-static method call non-static methods twice
display the output and observe the changes.Draw JVM architecture for the same.
*/

class Pune{
	static int covidActiveCases;
	int totalCases;
	
	static void noCorona(){
		System.out.println("covid active cases in pune="+covidActiveCases);
		System.out.println("---------------------------------------------");
	}
	void lockdown(){
		totalCases++;
		System.out.println("Total Cases="+totalCases);
		covidActiveCases++;
		System.out.println("covid active cases="+covidActiveCases);
	}
	void noLockdown(){
		totalCases++;
		System.out.println("Total Cases="+totalCases);
		covidActiveCases++;
		System.out.println("covid active cases="+covidActiveCases);
		
	}
}

class Mumbai{
	static int covidActiveCases;
	int totalCases;
	
	static void noCorona(){
		System.out.println("covid active cases in Mumbai="+covidActiveCases);
	}
	void lockdown(){
		totalCases++;
		System.out.println("Total Cases="+totalCases);
		covidActiveCases++;
		System.out.println("covid active cases="+covidActiveCases);
	}
	void noLockdown(){
		totalCases++;
		System.out.println("Total Cases="+totalCases);
		covidActiveCases++;
		System.out.println("covid active cases="+covidActiveCases);
	}	
}

class CoronaReport{
	public static void main(String[] arg){
		Pune p1=new Pune();
		p1.covidActiveCases=10;
		p1.totalCases=20;
		p1.lockdown();
		p1.noLockdown();
		
		Pune p2=new Pune();
		p2.covidActiveCases=75;
		p2.totalCases=33;
		p2.lockdown();
		p2.noLockdown();
		p2.noCorona();
		
		
		Mumbai m1=new Mumbai();
		m1.covidActiveCases=50;
		m1.totalCases=30;
		m1.lockdown();
		m1.noLockdown();
		
		Mumbai m2=new Mumbai();
		m2.covidActiveCases=58;
		m2.totalCases=20;
		m2.lockdown();
		m2.noLockdown();
		m2.noCorona();
		
	}
}












