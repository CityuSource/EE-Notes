/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package lab3.solution;

/**
 *
 * @author vanting
 */
public class Circle {

    double radius = 0;
    static int numOfCircle = 0;

    Circle(int radius) {
        this.radius = radius;
        Circle.numOfCircle++;
    }

    double getArea() {
        return radius * radius * Math.PI;
    }

    public static void main(String[] args) {
        Circle circle1 = new Circle(1);
        Circle circle2 = new Circle(2);
        Circle circle3 = new Circle(3);
        System.out.printf("Total %d circles created.\n", Circle.numOfCircle);
    }
}
