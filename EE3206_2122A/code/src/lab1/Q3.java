package lab1;

import java.util.Arrays;

public class Q3 {
    public static void main(String[] args) {
        int[] numArr = { 1, 2, 1, 2, 1 };
        System.out.println(hasTriples(numArr));
    }

    public static boolean hasTriples(int[] arr) {
        int[] counts = new int[10];
        Arrays.stream(arr).forEach(num -> counts[num]++);
        return (Arrays.stream(counts).anyMatch(num -> num > 2));
    }
}
