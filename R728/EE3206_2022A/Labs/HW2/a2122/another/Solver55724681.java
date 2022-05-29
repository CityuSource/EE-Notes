package another;

public class Solver55724681 implements Solver{
    int size;
    int[][] puzzle;

    @Override
    public int[][] solve() {
        for(int i = 0; i < this.size; i++) {
            for(int j = 0; j < this.size; j++) {
                if(puzzle[i][j] == 0){
                    for(int k = 0; k < this.size; k++){
                        if(checkValid(puzzle,i,j,k)) puzzle[i][j] = k;
                    }
                }
            }
        }
        return puzzle;
    }

    @Override
    public void setPuzzle(int[][] puzzle) {
        this.puzzle = puzzle;
    }

    @Override
    public int[][] getPuzzle() {
        return puzzle;
    }

    private boolean checkValid(int[][] puzzle, int row, int col, int num){
        for(int c = 0; c < puzzle.length; c++)
            if (puzzle[row][c] == num) return false;
        
        
        for(int r = 0; r < puzzle.length; r++)
            if(puzzle[r][col] == num) return false;
        

        int sqrt = (int)Math.sqrt(puzzle.length);
        int rowStart = row - row % sqrt;
        int colStart = col - col % sqrt;

        for (int r = rowStart;r < rowStart + sqrt; r++)
            for (int c = colStart; c < colStart + sqrt; c++)
                if (puzzle[r][c] == num) return false;
                
        return true;
    }
}
