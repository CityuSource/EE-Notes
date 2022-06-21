package hw1.s1;

public class Rat {
    public int xPos, yPos;
    int dimensionSize = 7;
    Maze maze = new Maze(dimensionSize);
    public boolean inside;
    public String type = "Rat";

    public Rat() { // Default Constructor
        this.xPos = 0;
        this.yPos = 0;
        maze.visited[0][0] = true;
        this.inside = true;
    }

    public void setPos(int newX, int newY) { // Method to set the mouse's new position
        this.xPos = newX;
        this.yPos = newY;
        maze.visited[newX][newY] = true;
    }

    private boolean gameover() { // Check if the mouse is stuck or is at the exit
        if (this.xPos == dimensionSize - 1 && this.yPos == dimensionSize - 1) { // Check if it is at the exit
            this.inside = false;
            return true;
        }
        // Then Check if it is stuck
        if (!validmove(this.xPos + 1, this.yPos) && !validmove(this.xPos - 1, this.yPos)
                && !validmove(this.xPos, this.yPos + 1) && !validmove(this.xPos, this.yPos - 1))
            return true;

        return false; // Returns false if it is fine
    }

    private static char roll() { // Roll the dice to decide the direction the mouse is going to
        double dice = Math.random();
        return (dice <= 0.3) ? 'N' : (dice <= 0.6) ? 'E' : (dice <= 0.8) ? 'S' : 'W';
    }

    private boolean validmove(int xPos, int yPos) {
        if ((xPos < 0) || (yPos < 0) || (xPos > dimensionSize - 1) || (yPos > dimensionSize - 1))
            return false;
        if (maze.visited[xPos][yPos])
            return false;
        return true;
    }

    private void move() { // Method to call if the mouse wants to move
        int newX = this.xPos;
        int newY = this.yPos;

        char direction = roll();
        switch (direction) {
            case 'N':
                newY = newY + 1;
                break;
            case 'E':
                newX = newX + 1;
                break;
            case 'S':
                newY = newY - 1;
                break;
            case 'W':
                newX = newX - 1;
                break;
        }

        if (validmove(newX, newY))
            setPos(newX, newY);
    }

    public void escape() { // Method to start the escape route search
        while (!gameover()) {
            move();
        }
    }
}