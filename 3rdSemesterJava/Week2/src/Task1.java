import java.util.Scanner;

public class Task1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Въведете броя на елементите (n): ");
        int n = sc.nextInt();

        int[] array = new int[n];

        // Въвеждане на елементите
        System.out.println("Въведете " + n + " числа в диапазон [85, 100]:");
        for (int i = 0; i < n; i++) {
            do {
                System.out.print("Елемент " + (i + 1) + ": ");
                array[i] = sc.nextInt();

                if (array[i] < 85 || array[i] > 100) {
                    System.out.println("Грешка! Числото трябва да е в диапазон [85, 100]");
                }
            } while (array[i] < 85 || array[i] > 100);
        }

        // Проверка на масива
        System.out.println("\nРезултати:");
        for (int i = 0; i < n; i++) {
            if (array[i] % 2 != 0) {
                // Нечетно число - извеждаме индекса
                System.out.println("Нечетна стойност " + array[i] + " на индекс: " + i);
            } else {
                // Четно число - извеждаме числото на 3-та степен
                int cubed = array[i] * array[i] * array[i];
                System.out.println("Четна стойност " + array[i] + " на 3-та степен: " + cubed);
            }
        }

        sc.close();
    }
}