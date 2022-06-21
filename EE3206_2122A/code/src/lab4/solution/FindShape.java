/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab4.solution;

/**
 *
 * @author vanting
 */
public class FindShape {

    public static void main(String[] args) {
        int pos = max(new Shape[] { new Rectangle(3, 1), new Rectangle(2, 2), new Triangle(5) });

        System.out.println("The biggest shape in [" + pos + "].");
    }

    public static int max(Shape[] shapes) {
        int max = 0;
        int maxSize = 0;

        for (int i = 0; i < shapes.length; i++) {
            int size = 0;
            if (shapes[i] instanceof Rectangle) {
                Rectangle r = (Rectangle) shapes[i];
                size = r.getWidth() * r.getHeight();
            } else if (shapes[i] instanceof Triangle) {
                Triangle t = (Triangle) shapes[i];
                size = (1 + (2 * t.getHeight() - 1)) * t.getHeight() / 2;
            }

            if (size > maxSize) {
                max = i;
                maxSize = size;
            }
        }
        return max;
    }

}
