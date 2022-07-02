package S557;

public class Solver557 implements Solver{
    int size, sqrtSize;
    int[][] puzzle;

    @Override
    public int[][] solve() {
        if(size % sqrtSize != 0) return puzzle;

        for(int r = 0; r < this.size; r++) 
            for(int c = 0; c < this.size; c++) 
                if(puzzle[r][c] == 0){
                    for(int num = 1; num <= this.size; num++){
                        if(checkValid(r,c,num)) {
                            puzzle[r][c] = num;
                            puzzle = solve();

                            if(checkFinish()) return puzzle;
                            else puzzle[r][c] = 0;
                        }
                    }
                    return puzzle;
                }
            
        return puzzle;
    }

    @Override
    public void setPuzzle(int[][] puzzle) {
        this.size = puzzle.length;
        this.sqrtSize = (int) Math.sqrt(size);
        this.puzzle = new int[size][size];
        for (int i = 0; i < size; i++)
            System.arraycopy(puzzle[i], 0, this.puzzle[i], 0, size);
    }

    @Override
    public int[][] getPuzzle() {
        return puzzle;
    }

    private boolean checkValid(int row, int col, int num){
        for(int c = 0; c < puzzle.length; c++)
            if (puzzle[row][c] == num) return false;
        
        
        for(int r = 0; r < puzzle.length; r++)
            if(puzzle[r][col] == num) return false;
        
        int rowStart = row - row % sqrtSize;
        int colStart = col - col % sqrtSize;

        for (int r = rowStart;r < rowStart + sqrtSize; r++)
            for (int c = colStart; c < colStart + sqrtSize; c++)
                if (puzzle[r][c] == num) return false;
                
        return true;
    }

    private boolean checkFinish(){
        for(int i = 0; i < this.size; i++) 
            for(int j = 0; j < this.size; j++)
                if(puzzle[i][j] == 0) return false;
        
        return true;
    }
}
