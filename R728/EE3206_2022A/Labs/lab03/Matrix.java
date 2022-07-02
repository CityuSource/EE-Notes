/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package lab03;

import java.util.Formatter;

/**
 *
 * @author vanting
 */
public class Matrix {

    private int[][] elements;

    public Matrix(int[][] e) {
        this.elements = e;
    }

    public int getElement(int row, int col) {
        return elements[row][col];
    }

    public void setElement(int row, int col, int value) {
        elements[row][col] = value;
    }

    public boolean add(Matrix other) {

        int row1 = this.elements.length;
        int col1 = this.elements[0].length;
        int row2 = other.elements.length;
        int col2 = other.elements[0].length;

        if (row1 == row2 && col1 == col2) {
            for (int i = 0; i < row1; i++) {
                for (int j = 0; j < col1; j++) {
                    this.elements[i][j] += other.elements[i][j];
                }
            }
            return true;
        } else {
            return false;
        }
    }
    
    public Matrix multiply(Matrix other) {

        int row1 = this.elements.length;
        int col1 = this.elements[0].length;
        int row2 = other.elements.length;
        int col2 = other.elements[0].length;

        int sum = 0;
        int multiply[][] = new int[row1][col2];

        if (col1 == row2) {
            for (int i = 0; i < row1; i++) {
                for (int j = 0; j < col2; j++) {
                    for (int k = 0; k < col1; k++) {
                        sum = sum + elements[i][k] * other.elements[k][j];
                    }
                    multiply[i][j] = sum;
                    sum = 0;
                }
            }
            return new Matrix(multiply);
        } else
            return null;      
    }

    @Override
    public String toString() {

        StringBuilder sb = new StringBuilder();
        Formatter fmt = new Formatter(sb);
        int row = this.elements.length;
        int col = this.elements[0].length;

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                fmt.format("[%2d]", this.elements[i][j]);
            }
            fmt.format("%n");
        }
        
        return sb.toString();
    }
    
}
