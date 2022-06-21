package lab9.solution;

import java.awt.*;
import java.net.MalformedURLException;
import java.net.URL;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.*;
import javax.swing.border.LineBorder;
import javax.swing.border.TitledBorder;

public class FakeApp extends JFrame {

    public FakeApp() {

        JPanel leftMenu = new JPanel(new GridLayout(6, 1, 5, 5));
        leftMenu.setBorder(new TitledBorder("Menu"));
        JButton b1 = new JButton("Button 1");
        JButton b2 = new JButton("Button 2");
        JButton b3 = new JButton("Button 3");
        JButton b4 = new JButton("Button 4");
        b1.setForeground(Color.red);
        b2.setForeground(Color.green);
        b3.setForeground(Color.blue);
        b4.setFont(new Font("Arial", Font.BOLD | Font.ITALIC, 12));
        leftMenu.add(b1);
        leftMenu.add(b2);
        leftMenu.add(b3);
        leftMenu.add(b4);

        JPanel topBar = new JPanel(new FlowLayout(FlowLayout.LEFT, 5, 5));
        topBar.setBorder(new LineBorder(Color.LIGHT_GRAY, 1, true));
        topBar.add(new JLabel("File"));
        topBar.add(new JLabel("Tools"));
        topBar.add(new JLabel("Help"));

        JLabel logo = null;
        try {
            logo = new JLabel(new ImageIcon(
                    new URL("https://www.google.com/images/branding/googlelogo/2x/googlelogo_color_272x92dp.png")));
        } catch (MalformedURLException ex) {
            Logger.getLogger(FakeApp.class.getName()).log(Level.SEVERE, null, ex);
        }
        logo.setBorder(new TitledBorder("Logo"));

        setLayout(new BorderLayout(5, 5));
        add(topBar, BorderLayout.NORTH);
        add(leftMenu, BorderLayout.WEST);
        add(logo, BorderLayout.CENTER);
    }

    /** Main method */
    public static void main(String[] args) {
        FakeApp frame = new FakeApp();
        frame.setTitle("Name: Chan Tai Man / SID: 12345678");
        frame.setLocationRelativeTo(null); // Center the frame
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(800, 350);
        frame.setVisible(true);
    }
}
