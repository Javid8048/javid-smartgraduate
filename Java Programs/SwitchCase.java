import java.util.Scanner;
public class SwitchCase {
	public static void main(String args[]) {
		int tech;
		System.out.println("Enter any number : ");
		Scanner r = new Scanner(System.in);
		tech=r.nextInt();
		switch(tech) {
		case 1: {
			System.out.println("Java ");
			break;
		}
		case 2: {
			System.out.println("ES6");
			break;
		}
		default: {
			System.out.println("not listed.... ");
		}	
	}
}	}
