import java.util.Scanner;

public class Exercise2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while (true) {
            double number = sc.nextDouble();
            if (number < 0) {
                System.out.println("Negative number!");
                break;
            }
            double result = number * 2;
            System.out.printf("Result: %.2f%n", result);
        }
    }
}
