
package a2122.hw2;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.logging.Level;
import java.util.logging.Logger;



/**
 * Driver class to load and test Sudoku puzzles.
 * @author cwting
 */
public class Main {

    /**
     * Load a puzzle from a text file.
     * @param filename
     * @return a 2D integer array storing the sudoku clues.
     */
    public static int[][] loadPuzzleFromFile(String filename) {

        int[][] puzzle = null;
        try (Scanner scanner = new Scanner(new File(Main.class.getResource(filename).getFile()))) {

            int size = scanner.nextInt();
            puzzle = new int[size][size];

            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    puzzle[i][j] = scanner.nextInt();
                }
            }
        } catch (FileNotFoundException ex) {
            System.err.println("File not found.");
        } finally {
            return puzzle;
        }
    }

    /**
     * Print the given and solved puzzle side by side. 
     * @param given     the given puzzle
     * @param solved    the solved puzzle
     */
    public static void printPuzzle(int[][] given, int[][] solved) {

        for (int i = 0; i < given.length; i++) {
            
            for (int j = 0; j < given[0].length; j++) {
                System.out.printf("%3d", given[i][j]);
            }
            
            System.out.print("\t\t");
            
            for (int j = 0; solved != null && j < solved[0].length; j++) {
                System.out.printf("%3d", solved[i][j]);
            }
            System.out.println("");
        }
    }

    public static void main(String[] args) {

        Solver solver = new SolverDDDDDDDD();
        int[][] given = loadPuzzleFromFile("input/9-easy.txt");
        solver.setPuzzle(given);
        
        // measure time used
        long start = System.currentTimeMillis();
        int[][] solved = solver.solve();
        long time = System.currentTimeMillis() - start;
        
        printPuzzle(given, solved);
        System.out.println("Running Time (ms): " + time);

    }

}
