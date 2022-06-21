package ex3;

import java.util.Scanner;
import java.util.Arrays;

/**
 *
 * @author vanting
 */
public class APITest {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number for search: ");
        int num = scanner.nextInt();

        int[] list = { 4, 2, 11, 10, 7, 45, 60, 59, 50, 66, 79, 70, 69 }; // unsorted
        Arrays.sort(list);
        // java.util.Arrays.sort(list);
        // sorted => {2, 4, 7, 10, 11, 45, 50, 59, 60, 66, 69, 70, 79}
        System.out.println("Index is " + Arrays.binarySearch(list, num));
        // System.out.println("Index is " + java.util.Arrays.binarySearch(list, num));

    }

}
