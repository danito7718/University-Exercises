public class Exercise8 {
    public static void main(String[] args) {
        int[] arr = new int[20];

        for (int i = 0; i < arr.length; i++) {
            arr[i] = i * 5;
        }

        for (int value : arr) {
            System.out.print(value + " ");
        }
        System.out.println();

        int max = arr[0];
        for (int value : arr) {
            if (value > max) {
                max = value;
            }
        }
        System.out.println(max);

        int sum = 0;
        for (int value : arr) {
            sum += value;
        }
        System.out.println(sum);
    }
}
