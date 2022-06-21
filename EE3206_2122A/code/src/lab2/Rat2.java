package lab2;

import java.util.concurrent.ThreadLocalRandom;
import java.util.stream.IntStream;

public class Rat2 {
    public static void main(String[] args) throws Exception {
        int gen = 1000000;
        int res = generator(gen);

        double rate = (double) res / (double) gen;

        System.out.println("The Monte Carlo simulation result of " + gen + " runs: ");
        System.out.println("No. of successful escape: " + res);
        System.out.format("Success Rate P: %.3f", rate);
    }

    private static int generator(int num) {
        int success = 0;

        for (int i = 1; i <= num; i++)
            if (simulation())
                success++;

        return success;
    }

    private static boolean simulation() {
        double[] prob = { 0.2, 0.3, 0.3, 0.2 };
        Mouse mouse = new Mouse(prob);
        Maze map = new Maze(7, 7, 0, 0, 6, 6);

        while (!map.checkEscape())
            map.moveDir(mouse.getDiceRoll());

        return map.checkGoal();
    }
}

class Mouse {
    // ! 0: N, 1: E, 2: S, 3: W
    private double[] prob;

    public Mouse(double[] prob) {
        this.prob = prob.clone();

        for (int i = 1; i < this.prob.length; i++)
            this.prob[i] = this.prob[i] + this.prob[i - 1];
    }

    public Mouse() {
        this(new double[] { 0.25, 0.25, 0.25, 0.25 });
    }

    public int getDiceRoll() {
        double rand = ThreadLocalRandom.current().nextDouble(0, 1);
        return IntStream.range(0, prob.length).filter(idx -> rand <= prob[idx]).findFirst().orElse(-1);
    }

}

class Maze {
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

    public void setStart(int xPos, int yPos) {
        if (xPos < maze.length && yPos < maze[0].length)
            setPos(xPos, yPos);
    }

    public void setGoal(int xPos, int yPos) {
        if (xPos < maze.length && yPos < maze[0].length) {
            xGoal = xPos;
            yGoal = yPos;
        }
    }

    private void setPos(int xPos, int yPos) {
        maze[xPos][yPos] = 1;
        xCur = xPos;
        yCur = yPos;
    }

    private boolean checkPos(int xPos, int yPos) {
        return (xPos >= 0 && xPos < maze.length && yPos >= 0 && yPos < maze[0].length && maze[xPos][yPos] != 1);
    }

    public boolean checkEscape() {
        if (xCur == xGoal && yCur == yGoal)
            return true;

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