/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package lab04;

/**
 * Rectangle.java
 *
 * A rectangle to be drawn using character in the middle (horizontally) of the
 * screen. Object-oriented style.
 *
 * @author vanting
 */
class Rectangle extends Shape {

    // === instance variables ===
    /**
     * Width of this Rectangle
     */
    private int width;
    /**
     * Height of this Rectangle
     */
    private int height;

    /**
     * Constructor with given width and height.
     */
    public Rectangle(int width, int height) {
        this.width = width;
        this.height = height;
    }

    // === static methods (utility methods) ===
    /**
     * Retrieves the width.
     *
     * @return the width.
     */
    public int getWidth() {
        return width;
    }

    /**
     * Changes the width.
     *
     * @param width the new width to set.
     */
    public void setWidth(int width) {
        this.width = width;
    }

    /**
     * Retrieves the height.
     *
     * @return the height.
     */
    public int getHeight() {
        return height;
    }

    /**
     * Changes the height.
     *
     * @param height the new height to set.
     */
    public void setHeight(int height) {
        this.height = height;
    }

    /**
     * Draws this Rectangle to the screen.
     */
    @Override
    public void draw() {
        for (int i = 0; i < height; i++) {
            drawChars(' ', MIDDLE - width / 2); // leading spaces
            // drawChars(drawingChar, width);
            drawChars(getDrawingChar(), width);
            System.out.println();
        }
    }

    /**
     * Gets a String representation of this Rectangle.
     *
     * @return a String representation of this Rectangle.
     */
    @Override
    public String toString() {
        return String.format("Rectangle (width: %d, height: %d, char: %c)", width, height, getDrawingChar());
    }

    /**
     * The main method, creating a few Rectangles and testing the methods.
     */
    public static void main(String[] args) {
        Rectangle r1 = new Rectangle(1, 1);
        System.out.println(r1);
        r1.draw();

        Rectangle r2 = new Rectangle(1, 1);
        r2.setWidth(3);
        r2.setHeight(3);
        System.out.println(r2);
        r2.draw();

        Rectangle r3 = new Rectangle(10, 5);
        r3.setDrawingChar('#');
        System.out.println(r3);
        r3.draw();
    }
}
