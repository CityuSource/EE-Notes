package ex9;

import java.awt.Graphics;
import java.awt.Image;
import javax.swing.*;

public class DisplayImage extends JFrame {

    public DisplayImage() {
        add(new ImagePanel());
    }

    public static void main(String[] args) {
        JFrame frame = new DisplayImage();
        frame.setTitle("DisplayImage");
        frame.setSize(300, 300);
        frame.setLocationRelativeTo(null); // Center the frame
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }

    class ImagePanel extends JPanel {

        ImageIcon imageIcon = new ImageIcon("image/us.gif");
        Image image = imageIcon.getImage();

        /**
         * Draw image on the panel
         */
        @Override
        public void paintComponent(Graphics g) {
            super.paintComponent(g);

            if (image != null) {
                g.drawImage(image, 0, 0, this.getWidth(), getHeight(), this);
                //g.drawImage(image, 0, 0, this);
            }

        }
    }
}
