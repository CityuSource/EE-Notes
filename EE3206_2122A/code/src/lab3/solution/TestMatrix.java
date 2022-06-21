/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package lab3.solution;

/**
 *
 * @author vanting
 */
public class TestMatrix {

    public static void main(String[] args) {
        // initialize both matrices
        Matrix m1 = new Matrix(new int[][] { { 1, 2 }, { 3, 4 } });
        Matrix m2 = new Matrix(new int[][] { { 5, 6 }, { 0, 0 } }); // anonymous array
        m2.setElement(1, 0, 7);
        m2.setElement(1, 1, 8);

        System.out.println("Matrix m1:");
        System.out.println(m1);

        System.out.println("Matrix m2:");
        System.out.println(m2);

        System.out.println("Result of m1 + m2 -> m1:");
        if (m1.add(m2))
            System.out.println(m1);
        else
            System.out.println("Invalid matrix size.");

        System.out.println("Result of m1 x m2:");

        Matrix m3 = m1.multiply(m2);
        if (m3 != null)
            System.out.println(m3);
        else
            System.out.println("Invalid matrix size.");
    }
}
