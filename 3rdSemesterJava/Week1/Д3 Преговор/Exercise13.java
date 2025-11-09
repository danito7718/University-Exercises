import java.util.Scanner;

public class Exercise13 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        double earthWeight = sc.nextDouble();
        double moonWeight = earthWeight * 0.17;

        System.out.printf("%.2f%n", moonWeight);
    }
}
