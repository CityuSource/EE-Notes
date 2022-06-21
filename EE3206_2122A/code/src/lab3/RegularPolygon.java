package lab3;

public class RegularPolygon {
    private int n;
    private double side;

    public RegularPolygon() {
        this(3, 1);
    }

    public RegularPolygon(int n, double side) {
        setN(n);
        setSide(side);
    }

    public void setN(int n) {
        if (n >= 3)
            this.n = n;
    }

    public int getN() {
        return n;
    }

    public void setSide(double side) {
        if (side >= 0)
            this.side = side;
    }

    public double getSide() {
        return side;
    }

    public double getPerimeter() {
        return n * side;
    }

    public double getArea() {
        return (n * side * side) / (4 * Math.tan(Math.PI / n));
    }

    @Override
    public String toString() {
        return "The Regular Polygon n: " + n + ", side: " + side + ", Area: " + String.format("%.2f", getArea())
                + ", Perimeter: " + String.format("%.2f", getPerimeter());
    }

    public static void main(String[] args) {
        RegularPolygon test1 = new RegularPolygon();
        System.out.println(test1);

        RegularPolygon test2 = new RegularPolygon(6, 4);
        System.out.println(test2);
    }
}
