import java.lang.*;

class ExamsCancel {

	int x = 10;		// Instance Variable
        
	static int y = 20;      // Static variable

	int z = 30;		// Instance variable


	//Instance method
	void happy(){
	
		System.out.println("Thanks CM");
	}

	//Static method
	static void decisionPending(){
	
		System.out.println("Angry Faces");
	}

}

class Students {

	public static void main(String[] args){
	
		ExamsCancel obj = new ExamsCancel();
		
		obj.happy();				// Thanks CM

		//decisionPending();			// Error
		
		obj.decisionPending();			//Angry Faces
				
		ExamsCancel.decisionPending();		//Angry Faces
	}
}
