/*
write a program tocheck whether the angle are obtuse or right or acute
*/

class Angle{
	public static void main(String[] arg){
		int angle=90;
		String str;
		str=(angle<90)?((angle>90) ? "angle ="+angle+"is a obtuse angle" : "angle="+angle+"is acute angle" ):((angle>90) ?"angle="+angle+"is obtuse angle" : "angle ="+angle+"is a right angle");
		
		System.out.println(str);
	}
}
