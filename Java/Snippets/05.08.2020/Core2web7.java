class Core2web7{
	public static void main(String[] args){
		int var1=10;
		int var2= var1==10 ? var1++ : ++var1;
		System.out.println(var2);
	}
}

/*
Output:
	10
-----------------------------------------------------------
Exp:
	In java ternary operator acts like simple if statement
	The ternary operator consists of a condition that evaluates
	to either true or false
	In this case, var2 and var1 are both 10 so comparing with 10 
	they both are equal so condition is true. That means var1++
	will be executed and answer will be 10
*/
