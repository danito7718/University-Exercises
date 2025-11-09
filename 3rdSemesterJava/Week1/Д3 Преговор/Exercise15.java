import java.util.Scanner;

public class Exercise15 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int digit = sc.nextInt();

        switch (digit) {
            case 0 -> System.out.println("Zero / Нула");
            case 1 -> System.out.println("One / Едно");
            case 2 -> System.out.println("Two / Две");
            case 3 -> System.out.println("Three / Три");
            case 4 -> System.out.println("Four / Четири");
            case 5 -> System.out.println("Five / Пет");
            case 6 -> System.out.println("Six / Шест");
            case 7 -> System.out.println("Seven / Седем");
            case 8 -> System.out.println("Eight / Осем");
            case 9 -> System.out.println("Nine / Девет");
            default -> System.out.println("Invalid input");
        }
    }
}
