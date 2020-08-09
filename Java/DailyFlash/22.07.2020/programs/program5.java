/*
write one real time example in which instanceof operator is used . Draw JVM architecture of it 
*/

class AchyutGodbole{
	public static void main(String[] args){
		AchyutGodbole Musafir = new AchyutGodbole();
		AchyutGodbole operatingSystem =new AchyutGodbole();
		AchyutGodbole RealPython = null;
		AchyutGodbole yayati= null;
		
		
		System.out.println(Musafir instanceof AchyutGodbole);	//true
		
		System.out.println(operatingSystem instanceof AchyutGodbole); //true
		
		System.out.println(RealPython instanceof AchyutGodbole); //false
		
		System.out.println(yayati instanceof AchyutGodbole); //false
	}
}
