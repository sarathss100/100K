import java.util.Scanner;

public class GradeCalculator {

	@SuppressWarnings("resource")
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Please enter your written test mark : ");
		double writtentestmark = sc.nextInt();
		System.out.println("Please enter your Lab Exam mark : ");
		double labmark = sc.nextInt();
		System.out.println("Please enter your Assignments mark : ");
		double assignmentmark = sc.nextInt();
		
		grade(writtentestmark, labmark, assignmentmark);
	}
	
	static void grade(double writtentestmark, double labmark, double assignmentmark) {
		double overallgrade = (writtentestmark * 70) / 100 + (labmark * 20) / 100 + (assignmentmark * 10) / 100;
		System.out.println("Grade of the student is " + overallgrade);
	}
}
