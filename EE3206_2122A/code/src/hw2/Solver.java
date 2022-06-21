/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package hw2;

/**
 *
 * @author cwting
 */
public interface Solver {

    /**
     * Solve the sudoku puzzle by filling in all numbers without conflict.
     * 
     * @return a deep copy of the solved puzzle; or null if it cannot be solved.
     */
    public int[][] solve();

    /**
     * Store a deep copy of the given sudoku puzzle.
     * 
     * @param puzzle the givens or clues of the sudoku puzzle.
     */
    public void setPuzzle(int[][] puzzle);

    /**
     * @return a deep copy of the sudoku puzzle of its current state.
     */
    public int[][] getPuzzle();

}
