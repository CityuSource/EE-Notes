/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package lab03;

/**
 *
 * @author vanting
 */
public class CreateArrayOfCircle {

    public static void main(String[] args) {
        Circle[] circles = new Circle[3];
        for(int i=0; i<3; i++) {
            //circles[i] = new Circle(i);
            double area = circles[i].getArea();
            System.out.println(area);
        }
    }
}
