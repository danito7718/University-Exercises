import java.util.Scanner;

public class Exercise2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);


        System.out.print("Въведете броя почивни дни:");
        int holidayDays = sc.nextInt();

        int playingNormInMinutes = 30000;
        int workingMinutesPerDay = 63;
        int holidaysMinutesPerDay = 127;
        int workingDays = 365 - holidayDays;


        int totalPlayingTime = holidayDays * holidaysMinutesPerDay + workingDays * workingMinutesPerDay;

        int difference = Math.abs(playingNormInMinutes - totalPlayingTime);

        int hours = difference / 60;
        int minutes = difference % 60;

        if (totalPlayingTime > playingNormInMinutes) {
            System.out.print("Том е играл твърде много!\n");
            System.out.print(hours + " часа и " + minutes + " минути над нормата за игра.");
        }
        else {
            System.out.print("Том не е играл достатъчно.\n");
            System.out.print(hours + " часа и " + minutes + " минути по-малко от нормата за игра.");
        }



        /*
        Напишете програма, която въвежда броя почивни дни и отпечатва дали
        Том може да се наспи добре и колко е разликата от нормата за текущата година, като приемем че годината има 365 дни.
        */


    }
}
