import java.util.Scanner;

public class Exercise1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int orchids = sc.nextInt();
        int hyacinths = sc.nextInt();
        int roses = sc.nextInt();
        int cacti = sc.nextInt();
        int tulips = sc.nextInt();
        double phonePrice = sc.nextDouble();

        double total = orchids * 13.25 + hyacinths * 5 + roses * 8.50 + cacti * 8 + tulips * 3;
        total -= total * 0.07;

        if (total >= phonePrice) {
            int left = (int) Math.floor(total - phonePrice);
            System.out.println("She is left with " + left + " leva.");
        } else {
            int needed = (int) Math.ceil(phonePrice - total);
            System.out.println("She will have to borrow " + needed + " leva.");
        }
    }
}
