
//import java.lang.*;

class Examcancel{    // class ExamCancel extends Object
	int x=10;
	static int y=20;
	int z=30;
	
	/*
	Examcancel(){
	super()
	x=10;
	z-30;
	return;
	}
	*/
	
	void happy(){
		System.out.println("Thanks CM"); 
	}
	
	static void decisionPending(){
		System.out.println("Angry faces");
	}
	
	
	/*
	static{
	y=20
	}
	*/
}

class Students{
	public static void main(String[] args){
		Examcancel obj=new Examcancel();
		obj.happy();  //Thanks CM
		Examcancel.decisionPending(); //Angry Faces
		//decisionPending();
		obj.decisionPending(); //Angry Faces
	}
}
