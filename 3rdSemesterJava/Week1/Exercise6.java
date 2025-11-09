import java.util.Scanner;

public class Exercise6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 || i % 7 == 0) {
                continue; // пропуска числото
            }
            System.out.println(i);
        }
    }
}
