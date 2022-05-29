package ex9;

import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.JFrame;
import java.awt.GridLayout;

public class ShowGridLayout { 

    /** Main method */
    public static void main(String[] args) {
        JFrame frame = new JFrame();

        frame.setLayout(new GridLayout(3, 2, 5, 5));

        // Add labels and text fields to the frame
        frame.add(new JLabel("First Name"));
        frame.add(new JTextField(8));
        frame.add(new JLabel("MI"));
        frame.add(new JTextField(1));
        frame.add(new JLabel("Last Name"));
        frame.add(new JTextField(8));

        frame.setTitle("ShowGridLayout");
        frame.setLocationRelativeTo(null); // New since JDK 1.4
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(200, 125);
        frame.setVisible(true);
    }
}
