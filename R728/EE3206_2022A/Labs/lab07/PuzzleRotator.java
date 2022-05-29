package lab07;

import java.io.File;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.Scanner;

/**
 *
 * @author vanting
 */
public class PuzzleRotator {

    public static final String PUZZLE_NAME = "9-killer";
    
    public static void main(String[] args) {

        File row = new File(PUZZLE_NAME + ".txt");
        File col = new File(PUZZLE_NAME + "-rotated.txt");

        try (Scanner scanner = new Scanner(row);
                PrintWriter printer = new PrintWriter(col)) {

            int size = scanner.nextInt();
            int[][] puzzle = new int[size][size];

            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    puzzle[i][j] = scanner.nextInt();
                }
            }

            rotateMatrixInplace(puzzle);

            printer.println(size);
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    printer.printf("%3d", puzzle[i][j]);
                }
                printer.println();
            }

        } catch (IOException e) {
            System.err.println("IO Error.\n" + e.getMessage());
        }

    }

    /**
     * Position of p1 to p4 at start:
     * 
     *  1 x x 2
     *  x x x x
     *  x x x x
     *  4 x x 3
     * 
     * @param matrix 
     */
    public static void rotateMatrixInplace(int[][] matrix) {
        int length = matrix.length - 1;

        for (int i = 0; i <= (length) / 2; i++) {           // i: layer # counting inward
            for (int j = i; j < length - i; j++) {          // j: n-th # on the layer

                int p1 = matrix[i][j];                      // top-left
                int p2 = matrix[j][length - i];             // top-right
                int p3 = matrix[length - i][length - j];    // bottom-right
                int p4 = matrix[length - j][i];             // bottom-left

                //Swap values of 4 coordinates.
                matrix[j][length - i] = p1;
                matrix[length - i][length - j] = p2;
                matrix[length - j][i] = p3;
                matrix[i][j] = p4;
            }
        }
    }
}
