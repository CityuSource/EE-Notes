package lab3;

public class Swap2num {
    public static void main(String[] args) throws Exception {
        int num1 = 1;
        int num2 = 2;

        int[] numArr = new int[] { num1, num2 };

        System.out.println("Before swapping, num1 is " + numArr[0] + " and num2 is " + numArr[1]);

        swap(numArr);

        System.out.println("Before swapping, num1 is " + numArr[0] + " and num2 is " + numArr[1]);
    }

    public static void swap(int[] arr) {
        int temp = arr[0];
        arr[0] = arr[1];
        arr[1] = temp;

    }
}
