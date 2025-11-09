import java.util.Scanner;

public class Exercise1 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Веведете Километри:");
        int kilometers = sc.nextInt();
        System.out.print("Въведете част от деня (Ден, Нощ):");
        String partOfTheDay = sc.next();

        double startPriceTaxi = 0.90;
        double dayPriceTaxiPerKm = 2.30;
        double nightPriceTaxiPerKm = 1.80;
        double busPricePerKm = 1.50;

        double totalSum = 0;

        if (kilometers <20 && kilometers > 0)
        {
            if (partOfTheDay.equals("Ден"))
            {
               totalSum = (kilometers * dayPriceTaxiPerKm) + startPriceTaxi;
               System.out.println("Най-евтиният транспорт е с такси и струва:" + String.format("%.2f", totalSum) + "лв.");
            }
            else
            {
                totalSum = (kilometers * nightPriceTaxiPerKm) + startPriceTaxi;
                System.out.println("Най-евтиният транспорт е с такси и струва:" + String.format("%.2f", totalSum) + "лв.");
            }
        }
        else
        {
            totalSum = (kilometers * busPricePerKm);
            System.out.println("Най-евтиният транспорт е с автбоус и струва:" + String.format("%.2f", totalSum) + "лв.");
        }
        sc.close();
    }
}