package ex1;

import javax.swing.JOptionPane;

class NumberCounter {

    final int TOTAL_NUMBERS = 6;
    int[] numbers = new int[TOTAL_NUMBERS];
    int max = 0;
    int count = 0;

    /** instead of putting the main in a dummy class,
     *  you can put it here for short
     */
    public static void main(String[] args) {
        NumberCounter counter = new NumberCounter();
        counter.getNumbers();
        counter.findMax();
        counter.count();
        counter.showResult();
    }

    // Read all numbers
    void getNumbers() {
        for (int i = 0; i < numbers.length; i++) {
            String numString = JOptionPane.showInputDialog("Enter a number:");
            // Convert string into integer
            numbers[i] = Integer.parseInt(numString);
        }
    }

    // Find the largest
    void findMax() {
        max = numbers[0];
        for (int i = 1; i < numbers.length; i++) {
            if (max < numbers[i]) {
                max = numbers[i];
            }
        }
    }

    // Find the occurrence of the largest number
    void count() {
        count = 0;
        for (int i = 0; i < numbers.length; i++) {
            if (numbers[i] == max) {
                count++;
            }
        }
    }

    // Prepare the result
    void showResult() {
        String output = "The array is ";
        for (int i = 0; i < numbers.length; i++) {
            output += numbers[i] + " ";
        }

        output += "\nThe largest number is " + max;
        output += "\nThe occurrence count of the largest number " + "is " + count;

        // Display the result
        JOptionPane.showMessageDialog(null, output);
    }
}
