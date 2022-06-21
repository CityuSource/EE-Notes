package lab1;

import javax.swing.JOptionPane;

public class Q1 {
    public static void main(String[] args) {
        String value = JOptionPane.showInputDialog("Enter something:");
        double halfValue = Double.parseDouble(value) / 2;
        System.out.printf("Halve the value: %.2f\n", halfValue);
    }
}
