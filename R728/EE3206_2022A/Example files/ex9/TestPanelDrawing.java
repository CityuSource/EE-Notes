package ex9;

import java.awt.Color;
import java.awt.Graphics;
import javax.swing.*;

public class TestPanelDrawing extends JFrame {

    public TestPanelDrawing() {
        add(new NewPanel());
    }

    public static void main(String[] args) {
        TestPanelDrawing frame = new TestPanelDrawing();
        frame.setTitle("TestPanelDrawing");
        frame.setLocationRelativeTo(null); // Center the frame
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(200, 100);
        frame.setVisible(true);
    }

    class NewPanel extends JPanel {

        int x = 0;

        protected void paintComponent(Graphics g) {
            super.paintComponent(g);
            g.drawLine(0, 0, 50, 50);
            g.setColor(Color.red);
            g.drawString("Banner " + x++, 0, 40);

        }
    }

}
