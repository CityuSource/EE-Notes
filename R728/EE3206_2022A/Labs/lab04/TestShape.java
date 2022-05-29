package lab04;

import java.util.Scanner;

public class TestShape {

    /**
     * The main method, creating a few Rectangles and Triangle for testing.
     *
     * @param args
     */
    public static void main(String[] args) {

        // If we don't apply polymorphism, we may create 2 arrays...
        // Rectangle r[] = new Rectangle[NUM];
        // Triangle t[] = new Triangle[NUM];
        Scanner scanner = new Scanner(System.in);
        System.out.print("How many shapes to create? ");
        int num = Integer.parseInt(scanner.next());
        Shape shapes[] = new Shape[num];

        System.out.printf("Creating %d shapes.\n", shapes.length);
        for (int i = 0; i < shapes.length; i++) {
            System.out.printf("%d) Rectangle or Triangle ? (\"R\" or \"T\"): ", i + 1);
            String type = scanner.next();
            if (type.equalsIgnoreCase("R")) {
                System.out.printf("Enter the rectangle's width height (integer integer): ");
                int width = scanner.nextInt();
                int height = scanner.nextInt();
                shapes[i] = new Rectangle(width, height);
            } else if (type.equalsIgnoreCase("T")) {
                System.out.printf("Enter the triangle's height (integer): ");
                int height = scanner.nextInt();
                shapes[i] = new Triangle(height);
            }
        }

        System.out.print("Enter drawing character for all shapes: ");
        String ch = scanner.next();

        // Now, we don't need to know the exact types inside the array.
        for (Shape s : shapes) {
            s.setDrawingChar(ch.charAt(0));
            System.out.println(s);
            s.draw(); // polymorphic
        }

        // For Q4.
        int pos = FindShape.max(shapes);
        System.out.println("The biggest shape is at [" + pos + "]:");
        System.out.println(shapes[pos]);

    }
}

/* Reference example for creating array of objects
 *
 * int x[] = new int[10];
 * x[0] = 1;
 * 
 * Shape s[] = new Shape[10]; 
 * s[0] = new Rectangle(1, 2);
 * 
 */
