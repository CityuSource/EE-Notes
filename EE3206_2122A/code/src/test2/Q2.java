/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package test2;

/*
EE32106 Test 2
Student Name:
Student ID:
*/
import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.Graphics;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.border.TitledBorder;

/**
 *
 * @author Van
 */
public class Q2 extends JFrame {

    private final JPanel upper = new JPanel();
    private final JPanel middle = new Dartboard();
    private final JPanel lower = new JPanel();
    private final JLabel input = new JLabel("Total no. of random points: 10000");
    private final JLabel output = new JLabel();

    public static void main(String[] args) {
        JFrame frame = new Q2();
        frame.setTitle("Monte Carlo Simulation");
        frame.setSize(400, 400);
        frame.setLocationRelativeTo(null);
        frame.setDefaultCloseOperation(EXIT_ON_CLOSE);
        frame.setVisible(true);
    }

    public Q2() {
        upper.add(input);
        upper.setBorder(new TitledBorder("Input"));
        lower.add(output);
        lower.setBorder(new TitledBorder("Output"));
        add(upper, BorderLayout.NORTH);
        add(middle, BorderLayout.CENTER);
        add(lower, BorderLayout.SOUTH);
    }

    private class Dartboard extends JPanel {

        private static final int R = 100;

        @Override
        protected void paintComponent(Graphics g) {
            super.paintComponent(g);

            int xcenter = getWidth() / 2;
            int ycenter = getHeight() / 2;
            double x, y;
            int hits = 0;

            g.drawRect(xcenter - R, ycenter - R, 2 * R, 2 * R);
            g.drawOval(xcenter - R, ycenter - R, 2 * R, 2 * R);

            int n = 10_000;
            if (n > 0) {

                for (int i = 0; i < n; i++) {
                    x = (Math.random()) * 2 - 1.0; // -1 to +1
                    y = (Math.random()) * 2 - 1.0;
                    if ((x * x) + (y * y) < 1.0) {
                        hits++;
                        g.setColor(Color.RED);
                    } else
                        g.setColor(Color.GREEN);

                    g.drawRect(xcenter + (int) (x * R), ycenter + (int) (y * R), 0, 0);
                }
                output.setText("Estimated PI: " + 4.0 * hits / n);
            }
        }
    }
}
