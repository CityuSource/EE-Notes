/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab2.solution;

import java.util.Scanner;

/**
 *
 * @author Van
 */
public class Pi {

    // Print a very basic program description and ask for number of throws
    public static void main(String[] args) {
        Scanner reader = new Scanner(System.in);
        System.out.println("This program approximates PI using the Monte Carlo method.");
        System.out.print("Please enter number of throws (n): ");
        int numThrows = reader.nextInt();
        double PI = computePI(numThrows / 4);

        // Determine the difference from the PI constant defined in Math
        double Difference = Math.abs(PI - Math.PI);

        // Print out the approximated PI and difference
        System.out.println("Computed PI = " + PI + ", Difference = " + Difference);
    }

    // Calculates PI based on the number of throws versus misses
    public static double computePI(int numThrows) {

        int hits = 0;
        double PI = 0;

        for (int i = 1; i <= numThrows; i++) {
            // take sample from the first quarter only
            double xPos = Math.random(); // 0 to less than 1.0
            double yPos = Math.random();

            // Was the coordinate hitting the dart board?
            if (Math.sqrt((xPos * xPos) + (yPos * yPos)) < 1) {
                hits++;
            }
        }

        // Use Monte Carlo method formula
        PI = (4.0 * hits / numThrows);

        return PI;
    }
}
