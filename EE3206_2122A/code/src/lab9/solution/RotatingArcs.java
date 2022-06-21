package lab9.solution;

import java.awt.Color;
import java.awt.Graphics;
import javax.swing.JFrame;
import javax.swing.JPanel;

public class RotatingArcs extends JFrame {

    public RotatingArcs() {
        setTitle("RotatingArcs");
        add(new ArcsPanel());
    }

    /**
     * Main method
     */
    public static void main(String[] args) throws InterruptedException {
        RotatingArcs frame = new RotatingArcs();
        frame.setLocationRelativeTo(null); // Center the frame
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(250, 300);
        frame.setVisible(true);

        while (true) {
            Thread.sleep(10);
            frame.repaint();
        }

    }

    class ArcsPanel extends JPanel {

        int offset = 0;

        // Draw four blazes of a fan
        protected void paintComponent(Graphics g) {
            super.paintComponent(g);

            int xCenter = getWidth() / 2;
            int yCenter = getHeight() / 2;
            // 80% of the outer frame
            int radius = (int) (Math.min(getWidth(), getHeight()) * 0.4);

            int x = xCenter - radius;
            int y = yCenter - radius;

            g.setColor(Color.red);
            g.fillArc(x, y, 2 * radius, 2 * radius, offset + 0, 30);
            g.setColor(Color.green);
            g.fillArc(x, y, 2 * radius, 2 * radius, offset + 90, 30);
            g.setColor(Color.blue);
            g.fillArc(x, y, 2 * radius, 2 * radius, offset + 180, 30);
            g.setColor(Color.yellow);
            g.fillArc(x, y, 2 * radius, 2 * radius, offset + 270, 30);

            offset++;
        }
    }
}
