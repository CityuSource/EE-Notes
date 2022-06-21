package ex10;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class TestMultipleListener extends JFrame {

    private JButton jbtOK = new JButton("OK");
    private JButton jbtCancel = new JButton("Cancel");

    public TestMultipleListener() {
        setLayout(new FlowLayout());

        add(jbtOK);
        add(jbtCancel);

        // Register the first listeners
        ActionListener firstListener = new FirstListener();
        jbtOK.addActionListener(firstListener);
        jbtCancel.addActionListener(firstListener);

        // Register the second listener for buttons
        ActionListener secondListener = new SecondListener();
        jbtOK.addActionListener(secondListener);
        jbtCancel.addActionListener(secondListener);
    }

    /** Main method */
    public static void main(String[] args) {
        TestMultipleListener frame = new TestMultipleListener();
        frame.setTitle("TestMultipleListener");
        frame.setLocationRelativeTo(null); // Center the frame
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(200, 80);
        frame.setVisible(true);
    }

    private class FirstListener implements ActionListener {

        /** This method will be invoked when a button is clicked */
        public void actionPerformed(ActionEvent e) {
            System.out.print("First listener: ");

            if (e.getSource() == jbtOK) {
                System.out.println("The OK button is clicked");
            } else if (e.getSource() == jbtCancel) {
                System.out.println("The Cancel button is clicked");
            }
        }
    }

    /** The class for the second listener */
    private class SecondListener implements ActionListener {

        /** Handle ActionEvent */
        public void actionPerformed(ActionEvent e) {
            System.out.print("Second listener: ");

            // A button has an actionCommand property, which is same as the
            // text of the button by default.
            if (e.getActionCommand().equals("OK")) {
                System.out.println("The OK button is clicked");
            } else if (e.getActionCommand().equals("Cancel")) {
                System.out.println("The Cancel button is clicked");
            }
        }
    }
}
