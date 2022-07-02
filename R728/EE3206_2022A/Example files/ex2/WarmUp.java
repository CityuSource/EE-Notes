package ex2;

/**
 * Problem: 
 *   In a 2D space, find the length of a line.
 * 
 * @author vanting
 */
// The Main class
public class WarmUp {

    public static void main(String[] args) {

        Point s = new Point(2, 2);
        Point e = new Point(3, 3);
        Line ln = new Line(s, e);

        System.out.println("The length is " + ln.findLength());
        System.out.println("No. of points = " + Point.numOfPoints);

        // the procedural approach
        //System.out.println("The length is " + WarmUp.cStyleFunctionFindLength(2, 2, 3, 3));

    }

    public static double cStyleFunctionFindLength(int x1, int y1, int x2, int y2) {
        return Math.sqrt(Math.pow(x1 - x2, 2) + Math.pow(y1 - y2, 2));
    }
}

// The Point class
class Point {
    // data encapsulation

    private int x;
    private int y;
    static int numOfPoints = 0;

    Point(int n1, int n2) {
        x = n1;
        y = n2;
        numOfPoints++;
    }

    public int getX() {
        return x;
    }

    public int getY() {
        return y;
    }

    public void setX(int n) {
        if (n >= 0) {
            x = n;
        }
    }
}

// The Line class
class Line {

    Point start;
    Point end;

    Line(Point n1, Point n2) {
        start = n1;
        end = n2;
    }

    double findLength() {
        return Math.sqrt(Math.pow(start.getX() - end.getX(), 2) + Math.pow(start.getY() - end.getY(), 2));
    }
}