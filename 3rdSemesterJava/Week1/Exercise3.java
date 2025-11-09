import java.util.Scanner;

public class Exercise3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int hoursNeeded = sc.nextInt();
        int days = sc.nextInt();
        int employees = sc.nextInt();

        double workingDays = days - (days * 0.10);
        double totalHours = Math.floor(employees * workingDays * 10);

        if (totalHours >= hoursNeeded) {
            double hoursLeft = totalHours - hoursNeeded;
            System.out.printf("Yes!%.0f hours left.", hoursLeft);
        } else {
            double hoursNotEnough = hoursNeeded - totalHours;
            System.out.printf("Not enough time!%.0f hours needed.", hoursNotEnough);
        }
    }
}
