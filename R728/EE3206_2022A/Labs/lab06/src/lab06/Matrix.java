/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package lab06;


/**
 *
 * @author vanting
 */
public class Matrix {

    private int[][] elements;

    Matrix(int[][] e) {
        this.elements = e;
    }    

    public int getElement(int row, int col) {
        return elements[row][col];
    }
    
    public void setElement(int row, int col, int value) {
        elements[row][col] = value;
    }
    
    public boolean add(Matrix matrix2) {

        int row1 = this.elements.length;
        int col1 = this.elements[0].length;
        int row2 = matrix2.elements.length;
        int col2 = matrix2.elements[0].length;

        if (row1 == row2 && col1 == col2) {
            for (int i = 0; i < row1; i++) {
                for (int j = 0; j < col1; j++) {
                    this.elements[i][j] += matrix2.elements[i][j];
                }
            }
            return true;
        } else {
            return false;
        }
    }

    public void print() {

        int row = this.elements.length;
        int col = this.elements[0].length;

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                System.out.printf("[%02d]", this.elements[i][j]);
            }
            System.out.println("");
        }
    }
    
    // for Q6 in Lab 03 
    public Matrix multiply(Matrix matrix2) throws DimensionMismatchException {

        int row1 = this.elements.length;
        int col1 = this.elements[0].length;
        int row2 = matrix2.elements.length;
        int col2 = matrix2.elements[0].length;

        int sum = 0;
        int multiply[][] = new int[row1][col2];

        if (col1 == row2) {
            for (int i = 0; i < row1; i++) {
                for (int j = 0; j < col2; j++) {
                    for (int k = 0; k < col1; k++) {
                        sum = sum + elements[i][k] * matrix2.elements[k][j];
                    }
                    multiply[i][j] = sum;
                    sum = 0;
                }
            }
            return new Matrix(multiply);
        } else {
            DimensionMismatchException ex = new DimensionMismatchException();
            ex.setFirstMatrix(this);
            ex.setSecondMatrix(matrix2);
            throw ex;
        }     
    }
}

