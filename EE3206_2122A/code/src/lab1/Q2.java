package lab1;

import javax.swing.JOptionPane;

public class Q2 {
    public static void main(String[] args) throws Exception {
        for (char c = 'A'; c <= 'Z'; c++) {
            System.out.print(c + " ");
        }

        String input = JOptionPane.showInputDialog("Input:");
        System.out.println(input);
    }
}
