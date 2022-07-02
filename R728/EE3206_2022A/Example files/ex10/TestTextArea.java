package ex10;

import java.awt.BorderLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JFrame;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;
import javax.swing.JTextField;

/**
 *
 * @author vanting
 */
public class TestTextArea extends JFrame {

    JTextField jtf = new JTextField();
    JTextArea jta = new JTextArea(10, 10);

    public static void main(String[] args) {
        // Create a frame and set its properties
        JFrame frame = new TestTextArea();
        frame.setTitle("Test TextArea");
        frame.setSize(400, 300);
        frame.setLocationRelativeTo(null); // Center the frame
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }

    public TestTextArea() {

        setLayout(new BorderLayout(5, 5));
        add(jtf, BorderLayout.NORTH);
        //add(jta, BorderLayout.CENTER);
        add(new JScrollPane(jta), BorderLayout.CENTER);       

        jtf.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                jta.append("\n" +  jtf.getText());
                jtf.setText("");
            }
        });
    }
}