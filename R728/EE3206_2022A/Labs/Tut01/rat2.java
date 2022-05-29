package lab2;

import java.util.Arrays;
import java.util.concurrent.ThreadLocalRandom;
import java.util.stream.IntStream;

//todo maze.checkStatus
//todo while (status == ok) mouse keep going
//todo if (location = 6,6) sussess and break
//todo (out of loop) fail

public class rat2 {
    public static void main(String[] args) throws Exception {
        double[] prob = { 0.2, 0.3, 0.3, 0.2 };
        Mouse mouse = new Mouse(prob);

        System.out.println(mouse.getRollDice());
        System.out.println(mouse.getRollDice());
        System.out.println(mouse.getRollDice());
        System.out.println(mouse.getRollDice());
        System.out.println(mouse.getRollDice());

        Maze map = new Maze(6, 6);
        map.startMaze();
        map.printMaze();
    }

}

class Mouse {
    // 0: N, 1: E, 2: S, 3: W
    private double[] prob;

    public Mouse(double[] prob) {
        this.prob = new double[prob.length];

        for (int i = 0; i < this.prob.length; i++)
            this.prob[i] = Arrays.stream(prob, 0, i + 1).sum();
    }

    public Mouse() {
        this(new double[] { 0.25, 0.25, 0.25, 0.25 });
    }

    public int getRollDice() {
        double rand = ThreadLocalRandom.current().nextDouble(0, 1);
        return IntStream.range(0, prob.length).filter(idx -> rand <= prob[idx]).findFirst().orElse(-1);
    }

}

class Maze {
    private static int[][] maze;

    public Maze(int xDim, int yDim) {
        maze = new int[xDim][yDim];
    }

    public void startMaze() {
        maze[0][0] = 1;
    }

    public void printMaze() {
        for (int[] x : maze) {
            for (int y : x) {
                System.out.print(y + " ");
            }
            System.out.println();
        }
    }

}