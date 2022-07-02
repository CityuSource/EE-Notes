/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab06;

/**
 *
 * @author vanting
 */
public class DimensionMismatchException extends Exception {
    
    private Matrix firstMatrix;
    private Matrix secondMatrix;

    public Matrix getFirstMatrix() {
        return firstMatrix;
    }

    public void setFirstMatrix(Matrix firstMatrix) {
        this.firstMatrix = firstMatrix;
    }

    public Matrix getSecondMatrix() {
        return secondMatrix;
    }

    public void setSecondMatrix(Matrix secondMatrix) {
        this.secondMatrix = secondMatrix;
    }    
}
