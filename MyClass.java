import java.util.Scanner;

class Area {
	double circle(int r) {
		return Math.PI * (r * r);
	} 
	
	double square(int length) {
		return length * length;
	}
	
	double rectangle(int width , int length) {
		return width * length;
	}
	
	double triangle(int base, int perpendicularheight) {
		return  (0.5 * base) * perpendicularheight;
	}
}


public class MyClass extends Area {

	@SuppressWarnings("unused")
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		MyClass mc = new MyClass();
		System.out.println("Please enter your choice:\n1. Circle \n2. Square \n3. Rectanlge \n4. Triangle \n");
        int choice = sc.nextInt();
        
        switch(choice) {
        case 1: 
        	System.out.print("Please enter the radius : ");
        	int radius = sc.nextInt();
        	double result =  mc.circle(radius);
        	result = result * 100;
        	result = Math.round(result);
        	result = result / 100;
        	System.out.println("Area of a circle is : " + result);
        	break;
        case 2: 
        	System.out.print("Please enter the length : ");
        	int length = sc.nextInt();
        	double result1 =  mc.square(length);
        	result1 = result1 * 100;
        	result1 = Math.round(result1);
        	result1 = result1 / 100;
        	System.out.println("Area of a square is : " + result1);
        	break;
        case 3: 
        	System.out.print("Please enter the width and length : ");
        	int length1 = sc.nextInt();
        	int width = sc.nextInt();
        	double result11 =  mc.rectangle(width, length1);
        	result11 = result11 * 100;
        	result11 = Math.round(result11);
        	result11 = result11 / 100;
        	System.out.println("Area of a rectangle is : " + result11);
        	break;
        case 4: 
        	System.out.print("Please enter the base and perpendicularheight : ");
        	int base = sc.nextInt();
        	int perpendicularheight = sc.nextInt();
        	double result111 =  mc.triangle(base, perpendicularheight);
        	result111 = result111 * 100;
        	result111 = Math.round(result111);
        	result111 = result111 / 100;
        	System.out.println("Area of a triangle is : " + result111);
        	break;
        default:
        	System.out.println("Please choose valid choice!");
        }
	}
}
