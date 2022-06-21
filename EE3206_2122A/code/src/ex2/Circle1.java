package ex2;

/// Define the circle class with two constructors
public class Circle1 {

    double radius;

    /** Construct a circle with radius 1 */
    Circle1() {
        radius = 1.0;
    }

    /** Construct a circle with a specified radius */
    Circle1(double newRadius) {
        radius = newRadius;
    }

    /** Return the area of this circle */
    double getArea() {
        return radius * radius * Math.PI;
    }
}
