package ex10;

import javax.swing.*;
import java.awt.event.*;
import java.awt.*;

public class SimpleEventDemoInnerClass extends JFrame {

    JButton jbtOK = new JButton("OK");

    public SimpleEventDemoInnerClass() {
        
        setLayout(new FlowLayout());
        add(jbtOK);
        ActionListener listener = new OKListener();
        
        jbtOK.addActionListener(listener);
    }

    /** Main method */
    public static void main(String[] args) {
        JFrame frame = new SimpleEventDemoInnerClass();
        frame.setTitle("SimpleEventDemoInnerClass");
        frame.setLocationRelativeTo(null); // Center the frame
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(100, 80);
        frame.setVisible(true);
    }

    private class OKListener implements ActionListener {

        public void actionPerformed(ActionEvent e) {
            System.out.println("It is OK");
            jbtOK.setText("Not OK");
        }
    }


}
