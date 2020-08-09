class NestedSwitch{
	public static void main(String[] args){
		int ifloor=1;
		switch(ifloor){
			
			case 1:
				{
					char cch='S';	//s for shopping f for food
					System.out.println("First Floor");
					switch(cch){
						case 'S':
						case 's':
							System.out.println("Shopping");
							break;
							
						case 'F':
						case 'f':
							System.out.println("Nust Khaych !!!!");
							break;
							
						default:
							System.out.println("No Service");
							break;
					}
					break;
				}
				
			case 2:
				{
					char cch='m';	//m for Movies p for Playstation
					System.out.println("Second Floor");
					switch(cch){
						case 'M':
						case 'm':
							System.out.println("Dil Bechara : Movie");
							break;
							
						case 'P':
						case 'p':
							System.out.println("Football");
							break;
							
						default:
							System.out.println("No Service");
							break;
						}	
					break;
				}
				
			default:
				System.out.println("Wrong Floor");
				break;
		}
	}
}
