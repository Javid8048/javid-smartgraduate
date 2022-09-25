import java.util.Scanner;
public class Vowel {
	public static void main(String args[]) {
		Scanner r = new Scanner(System.in);
		char ch ;
		System.out.println("Enter a Alphabet");
		ch=r.next().charAt(0);
		if(ch == 'a' || ch =='e'||ch =='i'||ch =='o'||ch == 'u')
			System.out.println(ch+" is a Vowel");
		else
			System.out.println(ch+" is consonant");
	}
}
		
