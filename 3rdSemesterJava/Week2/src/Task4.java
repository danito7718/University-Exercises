import java.util.Scanner;

public class Task4 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Въведете дължимата сума (в долари): ");
        double amountDue = scanner.nextDouble();

        System.out.print("Въведете сумата, която клиентът дава (в долари): ");
        double amountGiven = scanner.nextDouble();

        // Проверка дали дадената сума е достатъчна
        if (amountGiven < amountDue) {
            System.out.println("Грешка! Дадената сума е по-малка от дължимата.");
            scanner.close();
            return;
        }

        // Изчисляване на рестото
        double change = amountGiven - amountDue;
        System.out.printf("\nРесто: $%.2f\n", change);

        // Превръщане на рестото в центове
        int changeCents = (int) Math.round(change * 100);

        // Изчисляване на броя долари
        int dollars = changeCents / 100;
        changeCents = changeCents % 100;

        // Изчисляване на броя монети от 25 цента
        int quarters = changeCents / 25;
        changeCents = changeCents % 25;

        // Изчисляване на броя монети от 10 цента
        int dimes = changeCents / 10;
        changeCents = changeCents % 10;

        // Изчисляване на броя монети от 5 цента
        int nickels = changeCents / 5;
        changeCents = changeCents % 5;

        // Остатъкът са монети от 1 цент
        int pennies = changeCents;

        // Извеждане на резултатите
        System.out.println("\nИнструкции за връщане на рестото:");
        if (dollars > 0) {
            System.out.println("Долари: " + dollars);
        }
        if (quarters > 0) {
            System.out.println("Монети по 25 цента: " + quarters);
        }
        if (dimes > 0) {
            System.out.println("Монети по 10 цента: " + dimes);
        }
        if (nickels > 0) {
            System.out.println("Монети по 5 цента: " + nickels);
        }
        if (pennies > 0) {
            System.out.println("Монети по 1 цент: " + pennies);
        }

        scanner.close();
    }
}