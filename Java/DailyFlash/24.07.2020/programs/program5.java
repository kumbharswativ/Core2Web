/*
write a java program that student have less than or greater than 75% of 
attendance and check whether the student is eligible for exam or not.
take function like this
boolean isEligible(int)
*/

class Eligibility{
	boolean isEligible(int a){
	boolean flag;
	
	System.out.println("Attendance"+a+"%");
	System.out.println("In processing.......");
	if(a>75) { 
		flag=true;
	}else{
		flag=false;
	}
	
	return flag;
	}
	
	public static void main(String[] arg){
		boolean res=false;
		String str1;
		Eligibility obj=new Eligibility();
		res=obj.isEligible(65);
		
		str1=(res == true)?"The Student is eligible for exam":"The Student is not eligible for exam";
			System.out.println(str1);
		
	}
}
