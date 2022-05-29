/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package lab09;

import java.awt.GraphicsEnvironment;

/**
 *
 * @author vanting
 */
public class AvailableFonts {

    public static void main(String[] args) {
        GraphicsEnvironment e = GraphicsEnvironment.getLocalGraphicsEnvironment();

        String[] fontnames = e.getAvailableFontFamilyNames();
        for (int i = 0; i < fontnames.length; i++) {
            System.out.println(fontnames[i]);
        }

    }
}
