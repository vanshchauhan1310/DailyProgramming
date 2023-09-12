public class ArithmeticExample {

public static void main(String[] args) {

int num1 = 10;

int num2 = 5;

 int calculate(num1,num2);

System.out.println("Original num1: " + num1);

System.out.println("Original num2: " + num2);

}

int calculate(int a, int b) {

int sum = a + b;

int difference = a - b;

int product = a * b;

int quotient = a / b;

System.out.println("Sum: " + sum);

System.out.println("Difference: " + difference);

System.out.println("Product: " + product);

System.out.println("Quotient: " + quotient);
}
}

