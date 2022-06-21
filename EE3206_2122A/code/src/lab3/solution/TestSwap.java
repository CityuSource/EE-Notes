package lab3.solution;

public class TestSwap {

    public static void main(String[] args) {
        int num1 = 1;
        int num2 = 2;
        Int num3 = new Int(3);
        Int num4 = new Int(4);

        System.out.println("Before invoking the swap method, num1 is " + num1 + " and num2 is " + num2);
        swap(num1, num2);
        System.out.println("After invoking the swap method, num1 is " + num1 + " and num2 is " + num2);

        System.out.println("\n");

        System.out.println("Before invoking the swap method, num3 is " + num3 + " and num4 is " + num4);
        swap(num3, num4);
        System.out.println("After invoking the swap method, num3 is " + num3 + " and num4 is " + num4);
    }

    /**
     * Swap two variables
     */
    public static void swap(int n1, int n2) {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

    public static void swap(Int n3, Int n4) {
        int temp = n3.value;
        n3.value = n4.value;
        n4.value = temp;
    }

    // wrapper class
    private static class Int {

        public int value;

        Int(int n) {
            value = n;
        }
        /*
         * @Override public String toString() { return String.valueOf(value); }
         */
    }
}
