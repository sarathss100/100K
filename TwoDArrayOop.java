import java.util.Scanner;

public class TwoDArrayOop {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		arrayOperation ao = new arrayOperation();
		
		System.out.println("Enter the size of array : ");
		int size = sc.nextInt();
		int[][] arr = new int[size][size];
		ao.getArray(arr, size);
        ao.displayArray(arr, size);
	}
}

class arrayOperation {
	public int[][] getArray(int[][] arr, int size) {
		
		Scanner sc = new Scanner(System.in); 
		System.out.println("Enter the array values : ");
		for(int i = 0; i < size; i++) {
			for(int j = 0; j < size; j++) {
				arr[i][j] = sc.nextInt();
			}
		}
		return arr;
	}
	
	public void displayArray(int[][] arr, int size) {
		System.out.println("Array elements are : ");
		for(int i = 0; i < size; i++) {
			for(int j = 0; j < size; j++) {
				System.out.print(arr[i][j] + " ");
			}
			System.out.println("");
		}
	}
}
