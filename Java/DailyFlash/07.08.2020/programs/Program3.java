/*
write a program using while loop to print first 10 numbers
which are divisible by 32 and 7.(Break the loop if any number
divisible by 32 and 7 is also divisible by 6).

Input: -
Output:
	224 448 672
	Breaking loop
	672 is divisible by 6
*/


class Program3{
	public static void main(String[] args){
		int num=1;
		
		while(num!=0){
			if(num%32==0 && num%7==0){
				if(num%6==0){
					System.out.print(num+" \n");
					System.out.println("Breaking loop\n"+num+"is divisible by 6");
					break;
				}
				else{
					System.out.print(num+" ");
				}
			}
			
			num++;
		}
	}
}



