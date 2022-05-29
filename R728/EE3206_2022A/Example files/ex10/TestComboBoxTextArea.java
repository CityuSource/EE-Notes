package ex10;

import java.awt.BorderLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;

/**
 *
 * @author vanting
 */
public class TestComboBoxTextArea extends JFrame {

    JComboBox jcb = new JComboBox();
    JTextArea jta = new JTextArea(10, 10);

    public static void main(String[] args) {
        // Create a frame and set its properties
        JFrame frame = new TestComboBoxTextArea();
        frame.setTitle("Test ComboBox and TextArea");
        frame.setSize(400, 300);
        frame.setLocationRelativeTo(null); // Center the frame
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }

    public TestComboBoxTextArea() {

        setLayout(new BorderLayout(5, 5));
        add(jcb, BorderLayout.NORTH);
        //add(jta, BorderLayout.CENTER);
        add(new JScrollPane(jta), BorderLayout.CENTER);
        
        jcb.addItem("Hong Kong");
        jcb.addItem("China");
        jcb.addItem("Taiwan");
        jcb.addItem("Macau");

        jcb.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                jta.append("\n" +  jcb.getSelectedItem());
            }
        });

        jcb.addItemListener(new ItemListener() {
            public void itemStateChanged(ItemEvent e) {
                if(e.getStateChange() == ItemEvent.DESELECTED)
                    System.out.println("Item: " + e.getItem() + " is deselected.");
                else
                    System.out.println("Item: " + e.getItem() + " is selected.");
            }
        });

    }
}