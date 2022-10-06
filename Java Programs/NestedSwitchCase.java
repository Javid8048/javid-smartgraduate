import java.util.Scanner;
public class NestedSwitchCase {
	public static void main(String aargs[]) {
		
		int course = 2;
		Scanner scan=new Scanner(System.in);
		System.out.println("Enter the number");
		int tech = scan.nextInt();
		switch(tech) {
			case 1:
				System.out.println("Python");
				break;
			case 2:
				switch(course) {
					case 1:
						System.out.println("J2EE");
						break;
					case 2:
						System.out.println("advance java");
				}
			}
		}
	}
