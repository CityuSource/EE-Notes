
package ex2;

/**
 *
 * @author vanting
 */
public class TestCircle1 {

    /** Main method */
    public static void main(String[] args) {

        // Create a circle with radius 5.0
        Circle1 myCircle = new Circle1(5.0);
        System.out.println("The area of the circle of radius " +
                myCircle.radius + " is " + String.format("%.2f", myCircle.getArea()));

        // Create a circle with radius 1
        Circle1 yourCircle = new Circle1();
        System.out.println("The area of the circle of radius " +
                yourCircle.radius + " is " + String.format("%.2f", yourCircle.getArea()));

        // Modify circle radius
        yourCircle.radius = 100;
        System.out.println("The area of the circle of radius " +
                yourCircle.radius + " is " + String.format("%.2f", yourCircle.getArea()));

    }
}
