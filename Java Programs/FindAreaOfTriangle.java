import java.util.Scanner;
class FindAreaOfTriangle {
	public static void main(String args[]) {
		Scanner scanner = new Scanner(System.in);
		System.out.println("Enter the width of the traingle ");
		double base = scanner.nextDouble();
		System.out.println("Enter the height of the traingle ");
		double height = scanner.nextDouble();
		
		System.out.println("Area of traingle is : "+((base*height)/2));
	}
}
