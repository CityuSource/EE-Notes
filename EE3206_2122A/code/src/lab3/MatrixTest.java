package lab3;

public class MatrixTest {
    public static void main(String[] args) {
        // initialize both matrices
        Matrix m1 = new Matrix(new int[][] { { 1, 2 }, { 3, 4 }, { 5, 6 } });
        Matrix m2 = new Matrix(new int[][] { { 5, 6 }, { 0, 0 } }); // anonymous array

        m2.setElement(1, 0, 7); // args: row, column, value
        m2.setElement(1, 1, 8);

        System.out.println("Matrix m1:");
        System.out.println(m1); // invoke m1.toString() implicitly

        System.out.println("Matrix m2:");
        System.out.println(m2);

        System.out.println("Result of m1 + m2 -> m1:");

        if (m1.add(m2)) // the sum is stored in m1
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
