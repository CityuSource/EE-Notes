/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package lab6.solution.src.lab06;

/**
 *
 * @author vanting
 */
public class TestMatrix {

    public static void main(String[] args) {
        // initialize both matrices
        Matrix m1 = new Matrix(new int[][] { { 5, 15, 0 }, { 2, 22, 0 } });
        Matrix m2 = new Matrix(new int[][] { { 5, 6 }, { 7, 8 } });

        System.out.println("First matrix:");
        m1.print();

        System.out.println("Second matrix:");
        m2.print();

        System.out.println("");
        System.out.println("Result of multiplication:");

        try {
            m1.multiply(m2).print();
        } catch (DimensionMismatchException ex) {
            System.out.println("Invalid matrix size: ");
            System.out.println("First matrix:");
            ex.getFirstMatrix().print();
            System.out.println("Second matrix:");
            ex.getSecondMatrix().print();
        }
    }
}
