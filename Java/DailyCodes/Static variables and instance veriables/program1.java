/*Instance veriables are separate for each object.
If changes were made in instance variable then it is only applicable to that object only. 
static variables are common for all objects.
If changes were made in static variable then it is applicable for all object.*/


class Kutumb{
int mob=1;          //Instance variable 
int laptop=1;		//Instance variable
static int tv=1;	//static variable

void shashiMethod(){
   System.out.println("Mobile="+mob);		//1
   System.out.println("laptop="+laptop);	//1
   System.out.println("TV="+tv);		//0
   }
   
void vikasMethod(){
	System.out.println("Mobile="+mob);		//1
	System.out.println("Laptop="+laptop);		//1
	System.out.println("TV="+tv);			//0 :change in static variable
	}
	
public static void main(String [] args){
	Kutumb shashi=new Kutumb();
	shashi.tv=0;				//Accessing static veriable 
	System.out.println("TV="+tv);		//0 :change in static variable
	shashi.shashiMethod();
	
	Kutumb vikas=new Kutumb();
	vikas.vikasMethod();
	}
}
