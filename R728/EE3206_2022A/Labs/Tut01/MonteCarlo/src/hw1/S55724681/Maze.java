package hw1.S55724681;

public class Maze {
    public int xGoal, yGoal, xPos, yPos, dimensionSize;
    public boolean escaped = false;
    public boolean[][] visited;

    public Maze() {
        this.dimensionSize = 7;
        setStart(0,0);
        setGoal(dimensionSize-1,dimensionSize-1);
        visited = new boolean[dimensionSize][dimensionSize];
        visited[0][0] = true;
    }

    public Maze(int dimensionSize){
        this.dimensionSize = dimensionSize;
        setStart(0,0);
        setGoal(dimensionSize-1,dimensionSize-1);
        visited = new boolean[dimensionSize][dimensionSize];
        visited[0][0] = true;
    }

    public void setGoal(int xGoal, int yGoal){
        this.xGoal = xGoal;
        this.yGoal = yGoal;
    }

    public void setStart(int xStart, int yStart){
        this.xPos = xStart;
        this.yPos = yStart;
    }

    public boolean gameover(Rat rat){ // Check if the mouse is stuck or is at the exit
        if(this.xPos == this.xGoal && this.yPos == this.yGoal) {  // Check if it is at the exit
            this.escaped = true;
            return true;
        }
        // Then Check if it is stuck
        if(!validmove(this.xPos+1,this.yPos) && !validmove(this.xPos-1,this.yPos) && !validmove(this.xPos,this.yPos+1) && !validmove(this.xPos,this.yPos-1)) return true;

        return false; // Returns false if it is fine
    }

    private boolean validmove(int xPos, int yPos) {
        if ((xPos < 0) || (yPos < 0 )|| (xPos > dimensionSize-1) || (yPos > dimensionSize-1)) return false;
        if (this.visited[xPos][yPos]) return false;
        return true;
    }

    public void move(char direction) { // Method to call if the mouse wants to move
        int newX = this.xPos;
        int newY = this.yPos;
        // System.out.println("The rat is at " + this.xPos + " " + this.yPos);
        switch(direction) {
            case 'N' : newY = newY+1; break;
            case 'E' : newX = newX+1; break;
            case 'S' : newY = newY-1; break;
            case 'W' : newX = newX-1; break;
        }
    
        if(validmove(newX, newY)) {
            this.xPos = newX;
            this.yPos = newY;
            this.visited[newX][newY] = true;
        }
    }
}
