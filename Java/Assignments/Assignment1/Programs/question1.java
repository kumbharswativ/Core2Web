/*
Write a Real-Time Java Program that revolves around the current
venture by our Indian government to boycott Chinese products, declare static &
Instance Methods and Variables are call them from main method. Moreover, draw
the JVM architecture to that program as well.

*/


class ChineseProducts{
	static int noOfProducts=100;
	int apps,electrics,vehicals;
	
	static void ProductCount(){
		System.out.println("Total Products from china="+noOfProducts);
	}
	
	void showProducts(){
	System.out.println("Apps="+apps);
	System.out.println("Electrics="+electrics);
	System.out.println("Vehicals="+vehicals);
	
	}
	
	public static void main(String[] arg){
		ChineseProducts cp=new ChineseProducts();
		
		cp.ProductCount();
		cp.apps=59;
		cp.electrics=30;
		cp.vehicals=11;
		cp.showProducts();
	}
}
