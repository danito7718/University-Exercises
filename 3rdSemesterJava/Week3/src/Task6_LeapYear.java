import java.util.Scanner;
import java.util.InputMismatchException;

public class Task6_LeapYear {

    // Метод за проверка дали годината е високосна
    private static boolean isLeap(int year) {
        boolean result = false;

        if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0))) {
            result = true;
        }

        return result;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = 0;
        int[] years = null;

        // Въвеждане на броя години с обработка на изключения
        boolean validInput = false;
        while (!validInput) {
            try {
                System.out.print("Въведете броя на годините, които искате да проверите: ");
                n = input.nextInt();

                if (n <= 0) {
                    System.out.println("Грешка! Броят години трябва да е положително число.");
                    continue;
                }

                validInput = true;

            } catch (InputMismatchException e) {
                System.out.println("Грешка! Трябва да въведете цяло число.");
                input.next(); // Изчистване на невалидните данни от потока
            }
        }

        // Създаване на масив
        years = new int[n];

        // Въвеждане на годините с обработка на изключения
        System.out.println("\nВъведете " + n + " години:");
        int i = 0;

        while (i < n) {
            try {
                System.out.print("Година " + (i + 1) + ": ");
                int year = input.nextInt();

                // Валидация
                if (year < 0) {
                    System.out.println("Грешка! Годината не може да е отрицателна. Въведете отново.");
                    continue;
                }

                years[i] = year;
                i++;

            } catch (InputMismatchException e) {
                System.out.println("Грешка! Трябва да въведете цяло число. Опитайте отново.");
                input.next(); // Изчистване на невалидните данни от потока
            }
        }

        // Показване на резултатите
        System.out.println("\n═══════════════════════════════════");
        System.out.println("Резултати:");
        System.out.println("═══════════════════════════════════");

        for (i = 0; i < n; i++) {
            int year = years[i];

            if (isLeap(year)) {
                System.out.println(year + " - високосна година");
            } else {
                System.out.println(year + " - невисокосна година");
            }
        }

        input.close();
    }
}