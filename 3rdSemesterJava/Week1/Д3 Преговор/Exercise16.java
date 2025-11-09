import java.util.Scanner;

public class Exercise16 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int points = sc.nextInt();
        int bonus;

        if (points >= 1 && points <= 3) {
            bonus = points * 10;
            System.out.println(bonus);
        } else if (points >= 4 && points <= 6) {
            bonus = points * 100;
            System.out.println(bonus);
        } else if (points >= 7 && points <= 9) {
            bonus = points * 1000;
            System.out.println(bonus);
        } else {
            System.out.println("Error");
        }
    }
}
