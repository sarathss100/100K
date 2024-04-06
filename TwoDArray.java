import java.util.Scanner;

public class TwoDArray {

	@SuppressWarnings("resource")
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the size of array : ");
		int size = sc.nextInt();
		
		int array1[][] = getArray(size, 1);	
		int array2[][] = getArray(size, 2);
		int arraySum[][] = addArray(array1, array2, size);
		displayArray(arraySum, size);
	}
	
	static int[][] getArray(int size, int n) {
		@SuppressWarnings("resource")
		Scanner sc = new Scanner(System.in);
		int[][] arr = new int[size][size];
		System.out.println("Enter the values of array " + n + " : ");
		for(int i = 0; i < size; i++) {
			for(int j = 0; j < size; j++) {
				arr[i][j] = sc.nextInt();
			}
		}
		return arr;
	}
	
	static int[][] addArray(int[][] arr1, int[][] arr2, int size) {
		
		int[][] arraySum = new int[size][size];
		for(int i = 0; i < size; i++) {
			for(int j = 0; j < size; j++) {
				arraySum[i][j] = arr1[i][j] + arr2[i][j];
			}
		}
		return arraySum;
	}
	
	static void displayArray(int[][] arraySum, int size) {
		System.out.println("Sum of array 1 and 2 : ");
		for(int i = 0; i < size; i++) {
			for(int j = 0; j < size; j++) {
				System.out.print(arraySum[i][j] + " ");
			}
			System.out.println("");
		}
	}
}

