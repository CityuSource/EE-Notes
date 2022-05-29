package test;

import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        System.out.println("Pi value approximation by Monte Carlo method");
        System.out.print("Please enter the number of throws (n): ");

        Scanner scanner = new Scanner(System.in);   // Get input for number of sample throws
        int n = scanner.nextInt();
        scanner.close();

        System.out.println("\n" + n);

        double result = computePI(n / 4);
        double difference = Math.abs(result - Math.PI);

        System.out.println("Computed PI = " + result + ", Difference = " + difference);
    }

    public static double computePI(int n) {
        int hits = 0;
        double result = 0;

        for (int i = 1; i <= n; i++){
            //This method returns a pseudorandom double greater than or equal to 0.0 and less than 1.0.
            double xPos = Math.random();
            double yPos = Math.random();

            if (Math.sqrt((xPos * xPos) + (yPos * yPos)) < 1) {
                hits++;
            }
        }
        result = (4.0 * hits/n);
        return result;
    }
}
