import java.util.Scanner;

public class Exercise4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String companyName = sc.nextLine();
        String companyAddress = sc.nextLine();
        String companyPhone = sc.nextLine();
        String companyFax = sc.nextLine();
        String companyWebsite = sc.nextLine();
        String managerFirstName = sc.nextLine();
        String managerLastName = sc.nextLine();
        String managerPhone = sc.nextLine();

        System.out.println(companyName);
        System.out.println("Address: " + companyAddress);
        System.out.println("Tel. " + companyPhone);
        System.out.println("Fax: " + companyFax);
        System.out.println("Web site: " + companyWebsite);
        System.out.printf("Manager: %s %s (tel. %s)", managerFirstName, managerLastName, managerPhone);
    }
}
