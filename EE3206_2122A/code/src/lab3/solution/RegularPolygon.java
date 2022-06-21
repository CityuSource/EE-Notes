/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab3.solution;

/**
 * Regular Polygon.
 *
 * @author Van
 */
public class RegularPolygon {

    // Declare and initialize default values.
    private int n = 3;
    private double side = 1.0;

    // Create constructor with default values.
    public RegularPolygon() {
    }

    // Create constructor with new n and side values.
    public RegularPolygon(int n, double side) {
        this.setN(n);
        this.setSide(side);
    }

    // get n method
    public int getN() {
        return this.n;
    }

    // set n method.
    public void setN(int n) {
        if (n >= 3)
            this.n = n;
        else
            System.err.println("The number of edges must be greater than three.");
    }

    // get side method.
    public double getSide() {
        return this.side;
    }

    // set side method.
    public void setSide(double side) {
        if (side >= 0)
            this.side = side;
        else
            System.err.println("The side length must be greater than or equal to zero.");
    }

    // Calculate Perimeter.
    public double getPerimeter() {
        return this.n * this.side;
    }

    // Calculate Area.
    public double getArea() {
        return (this.n * Math.pow(this.side, 2)) / (4 * Math.tan(Math.PI / this.n));
    }

    // Representation method of RegularPolygon object.
    @Override
    public String toString() {
        return "The Regular Polygon n: " + this.n + ", side: " + this.side + ", Area: "
                + String.format("%.2f", this.getArea()) + ", Perimeter: " + this.getPerimeter();
    }

}
