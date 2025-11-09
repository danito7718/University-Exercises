import java.util.Scanner;

public class Exercise9 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int month = sc.nextInt();
        int year = 0;
        if (month == 2) {
            year = sc.nextInt();
        }

        switch (month) {
            case 1:
                System.out.println("January 31");
                break;
            case 2:
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                    System.out.println("February 29");
                } else {
                    System.out.println("February 28");
                }
                break;
            case 3:
                System.out.println("March 31");
                break;
            case 4:
                System.out.println("April 30");
                break;
            case 5:
                System.out.println("May 31");
                break;
            case 6:
                System.out.println("June 30");
                break;
            case 7:
                System.out.println("July 31");
                break;
            case 8:
                System.out.println("August 31");
                break;
            case 9:
                System.out.println("September 30");
                break;
            case 10:
                System.out.println("October 31");
                break;
            case 11:
                System.out.println("November 30");
                break;
            case 12:
                System.out.println("December 31");
                break;
            default:
                System.out.println("Invalid month");
        }
    }
}
