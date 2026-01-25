import java.util.Scanner;

public class Task2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Въведете n: ");
        int n = scanner.nextInt();

        System.out.println("Числата от 1 до " + n + " със стъпка 3:");

        for (int i = 1; i <= n; i += 3) {
            if (i + 3 <= n) {
                System.out.print(i + ", ");
            } else {
                System.out.print(i);
            }
        }

        System.out.println();

        scanner.close();
    }
}