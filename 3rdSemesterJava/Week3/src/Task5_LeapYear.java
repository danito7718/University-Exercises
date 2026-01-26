import java.util.Scanner;

public class Task5_LeapYear {

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

        // Въвеждане на броя години
        System.out.print("Въведете броя на годините, които искате да проверите: ");
        int n = input.nextInt();

        // Валидация на n
        if (n <= 0) {
            System.out.println("Грешка! Броят години трябва да е положително число.");
            input.close();
            return;
        }

        // Създаване на масив за съхранение на годините
        int[] years = new int[n];

        // Въвеждане на годините
        System.out.println("\nВъведете " + n + " години:");
        int i = 0;
        do {
            System.out.print("Година " + (i + 1) + ": ");
            int year = input.nextInt();

            // Валидация - година не може да е отрицателна
            if (year < 0) {
                System.out.println("Грешка! Годината не може да е отрицателна. Въведете отново.");
                continue;
            }

            years[i] = year;
            i++;
        } while (i < n);

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