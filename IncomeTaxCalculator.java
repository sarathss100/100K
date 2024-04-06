import java.util.Scanner;

public class IncomeTaxCalculator {

	@SuppressWarnings("resource")
	public static void main(String[] args) {
		
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the annual income : ");
        int income = sc.nextInt();
        
        if(income <= 250000) {
        	System.out.println("No tax!");
        } else if(income > 250000 && income <= 500000 ) {
        	int incometax = (income * 5) / 100;
        	System.out.println("Income tax amount = "+ incometax);
        } else if(income > 500000 && income <= 1000000 ) {
        	int incometax = (income * 20) / 100;
        	System.out.println("Income tax amount = "+ incometax);
        } else if(income > 1000000 && income <= 5000000 ) {
        	int incometax = (income * 5) / 100;
        	System.out.println("Income tax amount = "+ incometax);
        } else {
        	System.out.println("Please try again!");
        }	
    }
}
