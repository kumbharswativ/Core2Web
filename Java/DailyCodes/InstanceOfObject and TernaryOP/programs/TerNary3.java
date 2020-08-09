class Ternary3{
	public static void main(String[] arg){
		int x=25;
		int y=20;
		int z=22;
		int ans=0;
		
		ans=(x<y) ?((x>z) ? x : z):( (y>z) ? y : z);
		System.out.println(ans);	//22
	}
}
