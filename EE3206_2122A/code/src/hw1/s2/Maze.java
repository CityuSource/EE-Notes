package hw1.s2;

public class Maze {
    private static int[][] maze;
    private static int xCur, yCur, xGoal, yGoal;

    public Maze(int xDim, int yDim) {
        maze = new int[xDim][yDim];
    }

    public Maze(int xDim, int yDim, int xStart, int yStart, int xGoal, int yGoal) {
        this(xDim, yDim);
        setStart(xStart, yStart);
        setGoal(xGoal, yGoal);
    }

    // check if valve valid and set starting position
    public void setStart(int xPos, int yPos) {
        if (xPos < maze.length && yPos < maze[0].length)
            setPos(xPos, yPos);
    }

    // check if valve valid and set target position
    public void setGoal(int xPos, int yPos) {
        if (xPos < maze.length && yPos < maze[0].length) {
            xGoal = xPos;
            yGoal = yPos;
        }
    }

    // update current position and mark current position as visited
    private void setPos(int xPos, int yPos) {
        maze[xPos][yPos] = 1;
        xCur = xPos;
        yCur = yPos;
    }

    // check if target position is valid or if visited before
    private boolean checkPos(int xPos, int yPos) {
        return (xPos >= 0 && xPos < maze.length && yPos >= 0 && yPos < maze[0].length && maze[xPos][yPos] != 1);
    }

    public boolean checkEscape() {
        // check if current position is goal position
        if (xCur == xGoal && yCur == yGoal)
            return true;

        // check if deadend is hitted
        boolean N = !checkPos(xCur - 1, yCur);
        boolean E = !checkPos(xCur, yCur + 1);
        boolean S = !checkPos(xCur + 1, yCur);
        boolean W = !checkPos(xCur, yCur - 1);
        return (N && E && S && W);
    }

    public boolean checkGoal() {
        return (maze[xGoal][yGoal] == 1);
    }

    private void movePos(int xPos, int yPos) {
        int xNext = xCur + xPos;
        int yNext = yCur + yPos;

        if (checkPos(xNext, yNext))
            setPos(xNext, yNext);
    }

    // [0]: North, [1]: East, [2]: South, [3]: West
    public void moveDir(int val) {
        switch (val) {
            case 0:
                movePos(-1, 0);
                break;
            case 1:
                movePos(0, 1);
                break;
            case 2:
                movePos(1, 0);
                break;
            case 3:
                movePos(0, -1);
                break;
        }
    }
}
