package ex1;

import javax.swing.JOptionPane;

public class CountEachLetter {

    /** Main method */
    public static void main(String[] args) {
        // Prompt the user to enter a string
        String s = JOptionPane.showInputDialog("Enter a string:");

        // Invoke the countLetters method to count each letter
        int[] counts = countLetters(s.toLowerCase());

        // Declare and initialize output string
        String output = "";

        // Display results
        for (int i = 0; i < counts.length; i++) {
            if (counts[i] != 0) {
                output += (char) ('a' + i) + " appears  " + counts[i]
                        + ((counts[i] == 1) ? " time\n" : " times\n");
            }
        }

        // Display the result
        System.out.println(output);
        //JOptionPane.showMessageDialog(null, output);
    }

    // Count each letter in the string
    public static int[] countLetters(String s) {
        int[] counts = new int[26];

        for (int i = 0; i < s.length(); i++) {
            if (Character.isLetter(s.charAt(i))) {
                counts[s.charAt(i) - 'a']++;
            }
        }

        return counts;
    }
}
