/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package lab4.solution;

/**
 * Shape.java
 *
 * A shape class to provide basic configuration of a shape.
 *
 * @author vanting
 */
public class Shape {

    /**
     * Character used to draw this Rectangle, default to '*'
     */
    private char drawingChar = '*';
    /**
     * The middle column on the screen
     */
    protected static final int MIDDLE = 40;

    /**
     * Draws a number of characters horizontally.
     *
     * @param ch  the character to draw
     * @param num the number of characters to draw
     * @remark This is a static method, as it is not specific to a particular
     *         instance of Rectangle.
     */
    protected static void drawChars(char ch, int num) {
        for (int i = 0; i < num; i++) {
            System.out.print(ch);
        }
    }

    /**
     * Retrieves the drawing character.
     *
     * @return the drawing character.
     */
    public char getDrawingChar() {
        return drawingChar;
    }

    /**
     * Changes the drawing character.
     *
     * @param drawingChar the new drawing character.
     */
    public void setDrawingChar(char drawingChar) {
        this.drawingChar = drawingChar;
    }

    /**
     * Dummy method with empty body. Is not invoked in general, but shall be
     * overriden by subclasses to draw the current shape to the screen depending on
     * the actual type represented by the subclass.
     */
    public void draw() {
        // should be implemented by subclass.
    }
}
