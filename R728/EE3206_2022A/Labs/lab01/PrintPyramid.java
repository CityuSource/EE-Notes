/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package lab01;

import javax.swing.JOptionPane;

/**
 *
 * @author vanting
 */
public class PrintPyramid {

    /** Main method */
    public static void main(String[] args) {
        // Prompt the user to enter the number of lines
        String input = JOptionPane.showInputDialog("Enter the number of lines:");
        int numberOfLines = Integer.parseInt(input);

        if (numberOfLines < 1 || numberOfLines > 15) {
            System.out.println("Enter a number from 1 to 15");
            System.exit(0);
        }

        // Print line by line
        for (int row = 0; row < numberOfLines; row++) {
            // Print leading spaces
            for (int column = 0; column < row; column++)
                System.out.print("   ");

            // Print leading numbers
            for (int num = numberOfLines - row; num >= 1; num--) 
                System.out.printf("% 3d", num);

            // Print ending numbers 
            for (int num = 2; num <= numberOfLines - row; num++)
                System.out.printf("% 3d", num);

            // Start a new line
            System.out.println();
        }
    }
}