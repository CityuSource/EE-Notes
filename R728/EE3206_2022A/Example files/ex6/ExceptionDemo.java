package ex6;

import java.util.Scanner;

public class ExceptionDemo {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter an integer: ");
        int number = 0;

        number = scanner.nextInt();

        // Display the result
        System.out.println("The number entered is " + number);

    }
}
