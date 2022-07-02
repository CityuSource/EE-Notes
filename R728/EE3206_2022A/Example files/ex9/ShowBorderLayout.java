package ex9;

import javax.swing.JButton;
import javax.swing.JFrame;
import java.awt.BorderLayout;

public class ShowBorderLayout extends JFrame {

    public ShowBorderLayout() {
        // Set BorderLayout with horizontal gap 5 and vertical gap 10
        setLayout(new BorderLayout(5, 10));

        // Add buttons to the frame
        add(new JButton("East"), BorderLayout.EAST);
        add(new JButton("South"), BorderLayout.SOUTH);
        add(new JButton("West"), BorderLayout.WEST);
        add(new JButton("North"), BorderLayout.NORTH);
        add(new JButton("Center"), BorderLayout.CENTER);
    }

    /** Main method */
    public static void main(String[] args) {
        ShowBorderLayout frame = new ShowBorderLayout();
        frame.setTitle("ShowBorderLayout");
        frame.setLocationRelativeTo(null); // New since JDK 1.4
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(300, 200);
        frame.setVisible(true);
    }
}
