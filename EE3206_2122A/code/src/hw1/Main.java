
package hw1;

import java.util.HashSet;
import java.util.Random;
import java.util.Set;

/**
 * Monte Carlo Simulator 2021/22 A
 *
 * @author vanting
 */
public class Main {

    static final int RUNS = 1000000;
    static final int SIZE = 6;

    public static void main(String[] args) {
        System.out.println("The Monte Carlo simulation result of one million runs:");
        int success = run(RUNS);
        System.out.printf("No. of successful escape: %d\n", success);
        System.out.printf("Success Rate P: %.3f\n", (float) success / RUNS);
    }

    public static int run(int n) {

        int success = 0;

        for (int k = 0; k < n; k++) {

            Mouse mouse = new Mouse();
            Maze maze = new Maze(SIZE);

            // start a single RUN
            while (!maze.isExit(mouse.getPos()) && !maze.isDeadend(mouse.getPos())) {

                Pos next = mouse.nextMove();

                if (maze.isOpen(next)) {
                    mouse.moveTo(next);
                    maze.mark(next);
                }
            }

            if (maze.isExit(mouse.getPos())) {
                success++;
            }
        }
        return success;
    }
}

class Mouse {

    private Random randomer = new Random();
    private Pos pos;

    public Mouse() {
        pos = new Pos(0, 0);
    }

    public Pos getPos() {
        return pos;
    }

    public Pos nextMove() {

        double p = randomer.nextDouble();

        if (p < 0.3) {
            return pos.south();
        } else if (p < 0.6) {
            return pos.east();
        } else if (p < 0.8) {
            return pos.north();
        } else {
            return pos.west();
        }

    }

    public void moveTo(Pos pos) {
        this.pos = pos;
    }

}

class Maze {

    private final int size;
    private Set<Pos> path = new HashSet<>();

    public Maze(int size) {
        this.size = size;
        path.add(new Pos(0, 0)); // mouse starts here
    }

    public void mark(Pos pos) {
        path.add(pos);
    }

    public boolean isExit(Pos pos) {
        return pos.getX() == size && pos.getY() == size;
    }

    /*
     * 1. The new point should still be within the boundaries of the grid; and 2.
     * the new point should not be path previously.
     */
    public boolean isOpen(Pos pos) {
        int x = pos.getX();
        int y = pos.getY();
        return (x >= 0 && y >= 0 && x <= size && y <= size && !path.contains(pos));
    }

    public boolean isDeadend(Pos pos) {
        if (isOpen(pos.east())) {
            return false;
        } else if (isOpen(pos.south())) {
            return false;
        } else if (isOpen(pos.west())) {
            return false;
        } else if (isOpen(pos.north())) {
            return false;
        } else {
            return true;
        }
    }

}

/**
 * Immutable class.
 *
 * @author vanting
 */
class Pos {

    private int x;
    private int y;

    Pos(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public int getX() {
        return x;
    }

    public int getY() {
        return y;
    }

    public Pos north() {
        return new Pos(x, y - 1);
    }

    public Pos south() {
        return new Pos(x, y + 1);
    }

    public Pos west() {
        return new Pos(x - 1, y);
    }

    public Pos east() {
        return new Pos(x + 1, y);
    }

    @Override
    public String toString() {
        return "(" + x + "," + y + ")";
    }

    @Override
    public boolean equals(Object o) {

        if (o != null && o instanceof Pos) {
            Pos b = (Pos) o;
            return x == b.x && y == b.y;
        }
        return false;
    }

    @Override
    public int hashCode() {
        int hash = 3;
        hash = 97 * hash + this.x;
        hash = 97 * hash + this.y;
        return hash;
    }

}
