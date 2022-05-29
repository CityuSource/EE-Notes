/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package hw2;

/**
 *
 * @author Leung Chun Wai
 */
public class Solver56046680 implements Solver {

    private int[][] puzzle;
    private int size, sqrtSize;

    public int getSize() {
        return size;
    }

    private void setSize(int size) {
        this.size = size;
        sqrtSize = (int) Math.sqrt(size);
    }

    /**
     * Solve the sudoku puzzle by filling in all numbers without conflict.
     * 
     * @return a deep copy of the solved puzzle; or null if it cannot be solved.
     */
    @Override
    public int[][] solve() {
        // Check if puzzle is perfect square, if so, solve the puzzle
        return size % sqrtSize == 0 && solvePuzzle() ? getPuzzle() : null;
    }

    private boolean solvePuzzle() {
        // Go though each cell if 0 with [1,size], backtrack if conflict
        for (int curRow = 0; curRow < size; curRow++) {
            for (int curCol = 0; curCol < size; curCol++) {
                if (puzzle[curRow][curCol] == 0) {
                    for (int num = 1; num <= size; num++) {
                        if (checkPuzzle(curRow, curCol, num)) {
                            puzzle[curRow][curCol] = num;
                            if (solvePuzzle()) {
                                return true;
                            } else {
                                // Backtracking
                                puzzle[curRow][curCol] = 0;
                            }
                        }
                    }
                    return false;
                }
            }
        }

        return true;
    }

    private boolean checkPuzzle(int curRow, int curCol, int num) {
        // Check if same number is placed in same row
        for (int i = 0; i < size; i++)
            if (puzzle[curRow][i] == num)
                return false;

        // Check if same number is placed in same col
        for (int i = 0; i < size; i++)
            if (puzzle[i][curCol] == num)
                return false;

        // Check if same number is placed in sub puzzle
        int startRow = curRow - curRow % sqrtSize, startCol = curCol - curCol % sqrtSize;
        for (int i = startRow; i < startRow + sqrtSize; i++)
            for (int j = startCol; j < startCol + sqrtSize; j++)
                if (puzzle[i][j] == num)
                    return false;

        return true;
    }

    /**
     * Store a deep copy of the given sudoku puzzle.
     * 
     * @param puzzle the givens or clues of the sudoku puzzle.
     */
    @Override
    public void setPuzzle(int[][] puzzle) {
        setSize(puzzle.length);
        this.puzzle = new int[size][size];
        for (int i = 0; i < size; i++)
            System.arraycopy(puzzle[i], 0, this.puzzle[i], 0, size);
    }

    /**
     * @return a deep copy of the sudoku puzzle of its current state.
     */
    @Override
    public int[][] getPuzzle() {
        int[][] current = new int[size][size];
        for (int i = 0; i < size; i++)
            System.arraycopy(puzzle[i], 0, current[i], 0, size);
        return current;
    }
}
