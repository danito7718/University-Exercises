import java.util.Scanner;

public class Task5 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Въведете наличното гориво в резервоара (в галони): ");
        double fuelInTank = scanner.nextDouble();

        System.out.print("Въведете разстоянието, което се изминава с 1 галон (в мили): ");
        double milesPerGallon = scanner.nextDouble();

        System.out.print("Въведете цената на 1 галон гориво (в долари): ");
        double pricePerGallon = scanner.nextDouble();

        // Изчисляване на дължината на пътя
        double totalDistance = fuelInTank * milesPerGallon;

        // Изчисляване на цената за 100 мили
        double gallonsFor100Miles = 100.0 / milesPerGallon;
        double costFor100Miles = gallonsFor100Miles * pricePerGallon;

        // Извеждане на резултатите
        System.out.println("\n--- Резултати ---");
        System.out.printf("Дължина на пътя, който може да бъде изминат: %.2f мили\n", totalDistance);
        System.out.printf("Цена за 100 мили: $%.2f\n", costFor100Miles);

        scanner.close();
    }
}