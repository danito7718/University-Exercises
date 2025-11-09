import java.util.Scanner;

public class Exercise14 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int number = sc.nextInt();

        int a = number / 1000;
        int b = (number / 100) % 10;
        int c = (number / 10) % 10;
        int d = number % 10;

        int sum = a + b + c + d;
        System.out.println(sum);

        System.out.println("" + d + c + b + a);
        System.out.println("" + d + a + b + c);
        System.out.println("" + a + c + b + d);
    }
}
