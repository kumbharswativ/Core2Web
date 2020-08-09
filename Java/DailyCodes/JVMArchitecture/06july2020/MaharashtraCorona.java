class Pune{
	static int coronaCount = 1000;
	int recoveredPatients = 600;
	int deaths = 100;
	int activeCases = 300;
	
	static void coronaInfo(){
		System.out.println("Total corona cases in Pune :" + coronaCount);
	} 
	
	void currentData(){
		System.out.println("Recovered Patients :"+recoveredPatients);
		System.out.println("Total Deaths :"+deaths);
		System.out.println("Active cases :"+activeCases);
		System.out.println("----------------------------------------------");	
	}
}

class Mumbai{
	static int coronaCount = 2000;
	int recoveredPatients = 1200;
	int deaths = 200;
	int activeCases = 600;
	
	static void coronaInfo(){
		System.out.println("Total corona cases in Mumbai:"+coronaCount);
	} 
	
	void currentData(){
		System.out.println("Recovered Patients :"+recoveredPatients);
		System.out.println("Total Deaths :"+deaths);
		System.out.println("Active cases :"+activeCases);
		System.out.println("----------------------------------------------");
	}
}

class Maharashtra{
	
	public static void main(String[] arg){
	System.out.println("Corona in Maharashtra :");
	System.out.println("----------------------------------------------");
	
	Pune sinhgadRoad = new Pune();
	Pune.coronaInfo();
	System.out.println("Corona cases in sinhgadRoad :");
	sinhgadRoad.recoveredPatients = 300;
	sinhgadRoad.deaths = 50;
	sinhgadRoad.activeCases = 150;
	sinhgadRoad.currentData();
	
	Pune sadashivpeth = new Pune();
	System.out.println("Corona cases in sadashivpeth:");
	sadashivpeth.recoveredPatients = 300;
	sadashivpeth.deaths = 50;
	sadashivpeth.activeCases = 150;
	sadashivpeth.currentData();
	
	
	Mumbai.coronaInfo();
	
	Mumbai thane = new Mumbai();
	System.out.println("Corona cases in Thane:");
	thane.recoveredPatients = 600;
	thane.deaths = 100;
	thane.activeCases = 300;
	thane.currentData();
	
	Mumbai vasai = new Mumbai();
	System.out.println("Corona cases in vasai:");
	vasai.recoveredPatients = 600;
	vasai.deaths = 100;
	vasai.activeCases = 300;
	vasai.currentData();
	
    }	
	
}




