//Write a program to print 1 to 20 even numbers

class WhileDemo1{
	public static void main(String[] arg){
		int i=1;
		while(i<=20){
			if(i%2==0)
				System.out.println(i);
			i++;
		}
	}
}
