import java.util.Scanner;

public class Calculator {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Operation op = new Operation();
		
		System.out.println("Please enter two numbers : ");
		int num1 = sc.nextInt();
		int num2 = sc.nextInt();
		
		System.out.println("Please choose an option below : \n1 for addition \n2 for substraction \n3 for multiplication \n4 for division");
		int choice = sc.nextInt();
		
		
		switch(choice) {
		case 1:
			  op.addition(num1, num2);
			  break;
		case 2:
			  op.substraction(num1, num2);
			  break;
		case 3:
			  op.multiplication(num1, num2);
			  break;
		case 4:
			  op.division(num1, num2);
			  break;
	    default:
	    	 System.out.println("Wrong entry!");
		}
		
	}

}

 class Operation {
	
	void addition(int num1, int num2) {
		int sum = num1 + num2;
		System.out.println("Result is : " + sum);
	}
	
	void substraction(int num1, int num2) {
		int sum = num1 - num2;
		System.out.println("Result is : " + sum);
	}
	
	void multiplication(int num1, int num2) {
		int sum = num1 * num2;
		System.out.println("Result is : " + sum);
	}
	
	void division(int num1, int num2) {
		float sum = num1 / num2;
		System.out.println("Result is : " + sum);
	}
}


