import java.util.Scanner;

public class ArrayProblemAdj {

	@SuppressWarnings("resource")
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		System.out.print("Please enter array limit : ");
		int limit = sc.nextInt();
		
		int[] arr = new int[limit];
		int[] arr1 = new int[limit - 1];
		
		System.out.println("Enter the values of array");
		for(int i = 0; i < limit; i++) {
			arr[i] = sc.nextInt();
		}
		
		int sum = 1;
		
        for(int i = 0; i < limit; i++) {
        	int value = arr[i];
        	sum *= value;
        	if(i > 0) {
        	    arr1[i - 1] = sum;
        	}
        	sum = value;
        }
        
        System.out.println("Output :");
        for(int i = 0; i < limit - 1; i++) {
        	System.out.print(arr1[i] + " ");
		}
	}
}
