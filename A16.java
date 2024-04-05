import java.util.Scanner;

class prime {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Please enter a number : ");
        int number = Integer.parseInt(sc.nextLine());
        
        int flag = 0;

        for(int i = 2; i <= number / 2; i++) {
            if(number % i == 0) {
                flag = 1;
                break;
            }
        }

        if(flag == 1) {
            System.out.println("Entered number is not a prime number");
        } else {
            System.out.println("Entered number is a prime number");
        }
    }
}