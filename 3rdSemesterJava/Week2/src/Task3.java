import java.util.Scanner;

public class Task3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n;

        // Въвеждане на n с валидация
        do {
            System.out.print("Въведете n (n < 20): ");
            n = scanner.nextInt();

            if (n >= 20 || n <= 0) {
                System.out.println("Грешка! n трябва да е положително число по-малко от 20.");
            }
        } while (n >= 20 || n <= 0);

        int[] array = new int[n];

        // Въвеждане на елементите с валидация
        System.out.println("Въведете " + n + " числа в интервал [10, 25]:");
        for (int i = 0; i < n; i++) {
            do {
                System.out.print("Елемент " + (i + 1) + ": ");
                array[i] = scanner.nextInt();

                if (array[i] < 10 || array[i] > 25) {
                    System.out.println("Грешка! Числото трябва да е в интервал [10, 25]. Въведете отново.");
                }
            } while (array[i] < 10 || array[i] > 25);
        }

        // Намиране на най-голямото число и неговия индекс
        int maxValue = array[0];
        int maxIndex = 0;

        for (int i = 1; i < n; i++) {
            if (array[i] > maxValue) {
                maxValue = array[i];
                maxIndex = i;
            }
        }

        // Извеждане на резултата
        System.out.println("\nНай-голямото число е: " + maxValue);
        System.out.println("Индексът му е: " + maxIndex);

        scanner.close();
    }
}