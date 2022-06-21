package ex10;

import javax.swing.*;
import java.awt.event.*;
import java.awt.*;

public class SimpleEventDemoAnonymousInnerClass extends JFrame {

    public SimpleEventDemoAnonymousInnerClass() {
        JButton jbtOK = new JButton("OK");
        setLayout(new FlowLayout());
        add(jbtOK);

        // Create and register anonymous inner class listener
        ActionListener lis = new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                System.out.println("It is OK");
            }
        };     
        
        jbtOK.addActionListener(lis);
    }

    /** Main method */
    public static void main(String[] args) {
        JFrame frame = new SimpleEventDemoAnonymousInnerClass();
        frame.setTitle("SimpleEventDemoAnonymousInnerClass");
        frame.setLocationRelativeTo(null); // Center the frame
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(100, 80);
        frame.setVisible(true);
    }
}
