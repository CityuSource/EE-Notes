package ex10;

import java.awt.*;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import javax.swing.*;

public class ButtonDemo extends JFrame {
    // Create a panel for displaying message

    protected MessagePanel messagePanel = new MessagePanel("Welcome to Java");
    // Declare two buttons to move the message left and right
    private JButton jbtLeft = new JButton("<=");
    private JButton jbtRight = new JButton("=>");

    public static void main(String[] args) {
        ButtonDemo frame = new ButtonDemo();
        frame.setTitle("ButtonDemo");
        frame.setLocationRelativeTo(null); // Center the frame
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(500, 200);
        frame.setVisible(true);
    }

    public ButtonDemo() {
        // Set the background color of messagePanel
        messagePanel.setBackground(Color.white);

        // Create Panel jpButtons to hold two Buttons "<=" and "right =>"
        JPanel jpButtons = new JPanel();
        jpButtons.setLayout(new FlowLayout());
        jpButtons.add(jbtLeft);
        jpButtons.add(jbtRight);

        // Set keyboard mnemonics
        jbtLeft.setMnemonic('L');		// Alt + L
        jbtRight.setMnemonic('R');		// Alt + R

        // Set tool tip text on the buttons
        jbtLeft.setToolTipText("Move message to left");
        jbtRight.setToolTipText("Move message to right");

        // Place panels in the frame
        setLayout(new BorderLayout());
        add(messagePanel, BorderLayout.CENTER);
        add(jpButtons, BorderLayout.SOUTH);

        // Register listeners with the buttons
        jbtLeft.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                messagePanel.moveLeft();
            }
        });

        jbtRight.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                messagePanel.moveRight();
            }
        });
    }
}
