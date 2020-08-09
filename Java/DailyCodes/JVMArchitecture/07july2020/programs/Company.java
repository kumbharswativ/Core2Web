class Capgemini{
	
	static int noOfEmp=200000;
	int projectCount=200;
	
	void displayProject(){
		System.out.println("capgemini project count :"+projectCount);
	}
	
	static void empInfo(){
		System.out.println("Capgemini total employee :"+noOfEmp);
	}
}

class TCS{
	
	static int noOfEmp=300000;
	int projectCount=350;
	
	void displayProject(){
		System.out.println("TCS project count :"+projectCount);
	}
	
	static void empInfo(){
		System.out.println("TCS total employee :"+noOfEmp);
	}
}

class ITCompanies{
	public static void main(String[] arg){
		Capgemini pune=new Capgemini();
		pune.projectCount=130;
		pune.displayProject();
		pune.empInfo();
		
		Capgemini chennai=new Capgemini();
		chennai.projectCount=70;
		chennai.displayProject();
		chennai.empInfo();
		
		TCS Pune=new TCS();
		Pune.projectCount=100;
		Pune.displayProject();
		Pune.empInfo();
		
		TCS banglore=new TCS();
		banglore.projectCount=100;
		banglore.displayProject();
		banglore.empInfo();
	}
}
