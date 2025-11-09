import java.util.Scanner;

public class Exercise5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        double sum = 0;
        int count = 0;

        while (true) {
            double number = sc.nextDouble();
            if (number <= 0) {
                break;
            }
            sum += number;
            count++;
        }

        if (count == 0) {
            System.out.println("No positive numbers entered.");
        } else {
            double average = sum / count;
            System.out.printf("%.2f%n", average);
        }
    }
}
