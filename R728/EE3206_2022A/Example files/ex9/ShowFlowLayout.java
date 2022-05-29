package ex9;

import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.JFrame;
import java.awt.FlowLayout;

public class ShowFlowLayout extends JFrame {

    public ShowFlowLayout() {
        // Set FlowLayout, aligned left with horizontal gap 10
        // and vertical gap 20 between components
        setLayout(new FlowLayout(FlowLayout.RIGHT, 10, 20));

        // Add labels and text fields to the frame
        this.add(new JLabel("First Name"));
        add(new JTextField(8));
        add(new JLabel("MI"));
        add(new JTextField(1));
        add(new JLabel("Last Name"));
        add(new JTextField(8));
    }

    /** Main method */
    public static void main(String[] args) {
        ShowFlowLayout frame = new ShowFlowLayout();
        frame.setTitle("ShowFlowLayout");
        frame.setLocationRelativeTo(null); // New since JDK 1.4
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(200, 200);
        frame.setVisible(true);
    }
}
