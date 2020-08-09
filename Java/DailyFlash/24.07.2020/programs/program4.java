/*
write a java program that takes any character and check wether the
character is vowel or consonant
*/

class Alphabet{
	public static void main(String[] arg){
		char ch='A';
		String str;
		str=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') ? ch+" is Vowel" :ch+" is Consonant";
		System.out.println(str);
	}
}
