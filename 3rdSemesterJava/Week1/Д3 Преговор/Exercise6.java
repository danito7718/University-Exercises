import java.util.Scanner;

public class Exercise6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        double sum = 0;
        double product = 1;
        int count = 0;

        while (true) {
            double number = sc.nextDouble();
            if (number < -10 || number > 10) {
                break;
            }
            if (number > 0) {
                sum += number;
                product *= number;
                count++;
            }
        }

        System.out.println("Count: " + count);
        System.out.println("Sum: " + sum);
        System.out.println("Product: " + product);
    }
}
