package lab3;

public class Matrix {
    private int[][] mat;

    public Matrix(int[][] arr) {
        mat = arr;
    }

    public Matrix() {
        this(new int[][] { {} });
    }

    public Matrix(int xDim, int yDim) {
        mat = new int[xDim][yDim];
    }

    public void setElement(int xPos, int yPos, int value) {
        if (xPos < mat.length && yPos < mat[0].length)
            mat[xPos][yPos] = value;
    }

    public int getElement(int xPos, int yPos) {
        return (xPos < mat.length && yPos < mat[0].length) ? mat[xPos][yPos] : 0;
    }

    public int[][] getMatrix() {
        return mat;
    }

    public boolean add(Matrix matB) {
        int[][] mat2val = matB.getMatrix();

        if (mat.length < mat2val.length || mat[0].length < mat2val[0].length)
            return false;

        for (int i = 0; i < mat2val.length; i++)
            for (int j = 0; j < mat2val[0].length; j++)
                mat[i][j] += mat2val[i][j];

        return true;
    }

    public Matrix multiply(Matrix matB) {
        int[][] mat2val = matB.getMatrix();

        if (mat[0].length != mat2val.length)
            return null;

        Matrix res = new Matrix(mat.length, mat2val[0].length);
        int[][] resMat = res.getMatrix();

        for (int i = 0; i < mat.length; i++)
            for (int j = 0; j < mat2val[0].length; j++)
                for (int k = 0; k < mat[0].length; k++)
                    resMat[i][j] += mat[i][k] * mat2val[k][j];

        return res;
    }

    @Override
    public String toString() {
        String res = "";

        for (int[] x : mat) {
            for (int y : x)
                res += String.format("[%2d]", y);
            res += String.format("%n");
        }

        return res;
    }
}
