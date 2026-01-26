public class Task4_LeapYear {

    // Метод за проверка дали годината е високосна
    private static boolean isLeap(int year) {
        boolean result = false;

        // Година е високосна ако:
        // (дели се без остатък на 4) И (дели се без остатък на 400 ИЛИ се дели с остатък на 100)
        if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0))) {
            result = true;
        }

        return result;
    }

    public static void main(String[] args) {
        // Масив с години за проверка
        int[] years = {2000, 2004, 2100, 2020, 2021, 2024, 1900, 2400};

        // Извличане на броя години в масива
        int n = years.length;

        System.out.println("Проверка на " + n + " години:");
        System.out.println("═══════════════════════════════════");

        // Проверка на всяка година
        for (int i = 0; i < n; i++) {
            int year = years[i];

            if (isLeap(year)) {
                System.out.println(year + " - високосна година");
            } else {
                System.out.println(year + " - невисокосна година");
            }
        }
    }
}