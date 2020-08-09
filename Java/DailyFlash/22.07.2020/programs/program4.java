class Human{
	public static void main(String[]args){
		Human Lion = null;
		Human Tiger = null;
		Human Puma = null;
		Human Monkey = new Human();
		
		boolean isLionHuman = Lion instanceof Human;
		System.out.println("Are Lion And Human Of Same Species ->>> "+isLionHuman);	//false
		
		boolean isTigerHuman = Tiger instanceof Human;
		System.out.println("Are Tiger And Human Of Same Species ->>> "+isTigerHuman);//false
		
		boolean isPumaHuman = Puma instanceof Human;
		System.out.println("Are Puma And Human Of Same Species ->>> "+isPumaHuman); //false
		
		boolean isMonkeyHuman = Monkey instanceof Human;
		System.out.println("Are Monkey And Human Of Same Species ->>> "+isMonkeyHuman);//true
	}
}
