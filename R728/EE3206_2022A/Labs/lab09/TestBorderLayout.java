/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package lab09;

import javax.swing.JButton;
import javax.swing.JFrame;
import java.awt.BorderLayout;
import java.awt.Dimension;

/**
 *
 * @author vanting
 */
public class TestBorderLayout extends JFrame {

    public TestBorderLayout() {
        setLayout(new BorderLayout(5, 5));
        JButton jbt = new JButton("I am a Button");
        jbt.setPreferredSize(new Dimension(100, 100));
        add(jbt, BorderLayout.CENTER);  
    }

    /** Main method */
    public static void main(String[] args) {
        TestBorderLayout frame = new TestBorderLayout();
        frame.setTitle("TestBorderLayout");
        frame.setLocationRelativeTo(null); 
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(300, 200);
        frame.setVisible(true);
    }
}

