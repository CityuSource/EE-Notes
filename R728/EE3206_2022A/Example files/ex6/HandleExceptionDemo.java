package ex6;

import java.util.*;

public class HandleExceptionDemo {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    boolean continueInput = true;

    do {

      try {
        System.out.print("Enter an integer: ");
        int number = scanner.nextInt();

        // Display the result
        System.out.println("The number entered is " + number);

        continueInput = false;      // terminate loop
      }
      catch (InputMismatchException ex) {
        System.out.println("Try again. (Incorrect input: an integer is required)");
        scanner.nextLine();     // discard the incorrect input
      }

    } while (continueInput);
  }
}
