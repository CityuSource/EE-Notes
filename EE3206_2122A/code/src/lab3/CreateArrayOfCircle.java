package lab3;

public class CreateArrayOfCircle {
    public static void main(String[] args) {
        Circle[] circles = new Circle[3];
        for (Circle circle : circles) {
            circle = new Circle(3);
            System.out.println(circle.getArea());
        }
    }
}
