import java.util.Scanner;

public class Task6 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n, m;

        // Въвеждане на интервала
        do {
            System.out.print("Въведете началото на интервала (n): ");
            n = scanner.nextInt();

            System.out.print("Въведете края на интервала (m): ");
            m = scanner.nextInt();

            if (n > m) {
                System.out.println("Грешка! Началото на интервала трябва да е по-малко или равно на края.");
            }
        } while (n > m);

        // Инициализация на променливите
        long product = 1;
        long sum = 0;
        long sumOfCubes = 0;

        // Изчисления
        System.out.println("\n--- Изчисления за интервал [" + n + ", " + m + "] ---");

        for (int i = n; i <= m; i++) {
            product *= i;
            sum += i;
            sumOfCubes += (long) i * i * i;
        }

        // Извеждане на резултатите
        System.out.println("\nРезултати:");
        System.out.println("─────────────────────────────────────");
        System.out.println("Произведение на числата: " + product);
        System.out.println("Сбор на числата: " + sum);
        System.out.println("Сбор на числата на 3-та степен: " + sumOfCubes);
        System.out.println("─────────────────────────────────────");

        // Допълнително - показване на отделните стойности на 3-та степен
        System.out.println("\nЧислата на 3-та степен:");
        for (int i = n; i <= m; i++) {
            long cube = (long) i * i * i;
            System.out.println(i + "³ = " + cube);
        }

        scanner.close();
    }
}