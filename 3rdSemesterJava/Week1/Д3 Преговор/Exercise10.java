import java.util.Scanner;

public class Exercise10 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Select figure: square, rectangle, circle, triangle");
        String figure = sc.nextLine().toLowerCase();

        switch (figure) {
            case "square":
                System.out.print("Enter side length: ");
                double side = sc.nextDouble();
                System.out.println("Area: " + (side * side));
                break;

            case "rectangle":
                System.out.print("Enter width: ");
                double width = sc.nextDouble();
                System.out.print("Enter height: ");
                double height = sc.nextDouble();
                System.out.println("Area: " + (width * height));
                break;

            case "circle":
                System.out.print("Enter radius: ");
                double radius = sc.nextDouble();
                System.out.println("Area: " + (Math.PI * radius * radius));
                break;

            case "triangle":
                System.out.print("Enter base: ");
                double base = sc.nextDouble();
                System.out.print("Enter height: ");
                double triHeight = sc.nextDouble();
                System.out.println("Area: " + (0.5 * base * triHeight));
                break;

            default:
                System.out.println("Unknown figure!");
        }
    }
}
