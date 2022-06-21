package lab2;

import java.util.concurrent.ThreadLocalRandom;

public class Rat {
    private static int dimensionX = 6;
    private static int dimensionY = 6;
    private static int[][] maze = new int[dimensionX + 1][dimensionY + 1];

    public static void main(String[] args) throws Exception {
        maze[0][0] = 1;
        tryMaze();

    }

    private static int dice() {
        double rand = ThreadLocalRandom.current().nextDouble(0, 1); // 0: N, 1: E, 2: S, 3: W
        return (rand <= 0.2) ? 0 : (rand <= 0.5) ? 1 : (rand <= 0.8) ? 2 : 3;
    }

    private static int tryMaze() {
        boolean notSuccess = true;
        int curX = 0;
        int curY = 0;
        // x-1
        // y+1
        // x+1
        // y-1
        // todo deadend road

        while (notSuccess) {
            int diceRes = dice();
            switch (diceRes) {
                case 0:
                    if (curX - 1 < 0 || maze[curX - 1][curY] == 1)
                        continue;
                    else {
                        curX = curX - 1;
                        maze[curX][curY] = 1;
                    }
                    break;

                case 1:
                    if (curY + 1 > dimensionY || maze[curX][curY + 1] == 1)
                        continue;
                    else {
                        curY = curY + 1;
                        maze[curX][curY] = 1;
                    }
                    break;

                case 2:
                    if (curX + 1 > dimensionX || maze[curX + 1][curY] == 1)
                        continue;
                    else {
                        curX = curX + 1;
                        maze[curX][curY] = 1;
                    }
                    break;

                case 3:
                    if (curY - 1 < 0 || maze[curX][curY - 1] == 1)
                        continue;
                    else {
                        curY = curY - 1;
                        maze[curX][curY] = 1;
                    }
                    break;
            }

            if (maze[dimensionX][dimensionY] == 1)
                notSuccess = false;
        }

        for (int[] x : maze) {
            for (int y : x) {
                System.out.print(y + " ");
            }
            System.out.println();
        }

        return 0;
    }
}
