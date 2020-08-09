

class ForBreak{
	public static void main(String[] arg){
		for(int i=1;i<=50;i++){
			if(i%7==0 && i%5==0)
				break;
			else
				System.out.println(i);
		}
		System.out.println("Out of loop");
	}
}
