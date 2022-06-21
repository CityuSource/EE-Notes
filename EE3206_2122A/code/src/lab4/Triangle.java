/**
 * Triangle.java Object-oriented style.
 **
 * @author vanting
 */

package lab4;

public class Triangle {
    private int height;
    private char drawingChar = '*';
    private static final int MIDDLE = 40;

    static private void drawChars(char ch, int num) {
        for (int i = 0; i < num; i++) {
            System.out.print(ch);
        }
    }

    public Triangle(int height) {
        this.height = height;
    }

    public int getHeight() {
        return height;
    }

    public void setHeight(int height) {
        this.height = height;
    }

    public char getDrawingChar() {
        return drawingChar;
    }

    public void setDrawingChar(char drawingChar) {
        this.drawingChar = drawingChar;
    }

    public void draw() {
        // complete this method
    }

    @Override
    public String toString() {
        return "Triangle(height:" + height + ", char:" + drawingChar + ")";
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