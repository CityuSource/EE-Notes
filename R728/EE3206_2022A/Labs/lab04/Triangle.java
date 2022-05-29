/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package lab04;

/**
 * A triangle. Object-oriented style.
 *
 * @author vanting
 */
class Triangle extends Shape {

    private int height;

    public Triangle(int height) {
        this.height = height;
    }

    public int getHeight() {
        return height;
    }

    public void setHeight(int height) {
        this.height = height;
    }

    @Override
    public void draw() {
        for (int i = 0; i < height; i++) {
            drawChars(' ', MIDDLE - i);             // print leading space
            drawChars(getDrawingChar(), 2 * i + 1); // print a line of Triangle
            System.out.println();                   // print end-of-line
        }
    }

    @Override
    public String toString() {
        return String.format("Triangle (height: %d, char %c)", height, getDrawingChar());
    }

    public static void main(String[] args) {
        Triangle t1 = new Triangle(5);
        System.out.println(t1);
        t1.draw();

        Triangle t2 = new Triangle(10);
        t2.setDrawingChar('@');
        System.out.println(t2);
        t2.draw();
    }

}
