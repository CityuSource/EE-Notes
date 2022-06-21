/*
EE32106 Test 2
Student Name:
Student ID:
*/
package test2;

import java.io.FileWriter;
import java.io.IOException;
import java.util.concurrent.ForkJoinPool;
import java.util.concurrent.RecursiveTask;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 * This class estimates PI value using the Euler series.
 */
public class Q1 {

    public static final int TERMS = 500_000_000;
    public static final int SUBTASK_SIZE = 50_000;

    // DON'T modify this driver function
    public static void main(String[] args) {

        double PI = computePi();
        System.out.println("The estimated PI is: " + PI);

        try (FileWriter writer = new FileWriter("PI_12345678.txt", true)) {
            writer.write(PI + "\n");
        } catch (IOException ex) {
            Logger.getLogger(Q1.class.getName()).log(Level.SEVERE, null, ex);
        }

    }

    /**
     * This method uses Fork Join Framework to execute the RecursivePiTask
     * to compute PI with multiple threads.
     * 
     * @return the estimated PI value
     */
    public static double computePi() {
        ForkJoinPool pool = new ForkJoinPool();
        double piSq = pool.invoke(new RecursivePiTask(1, TERMS + 1));
        return Math.sqrt(piSq);
    }
}

/**
 * This class represents a recursive task that divides itself to sub-tasks where
 * each sub-task computes only a part of the Euler series.
 */
class RecursivePiTask extends RecursiveTask<Double> {

    private static final int THRESHOLD = Q1.SUBTASK_SIZE;
    private final int start, end;

    public RecursivePiTask(int s, int e) {
        // sum up elements from start to end-1
        start = s;
        end = e;
    }

    @Override
    protected Double compute() {

        if ((end - start) < THRESHOLD) {
            double piSq = 0;
            for (int k = start; k < end; k++) {
                piSq += 6.0 / ((double) k * k);
            }
            return piSq;
        } else {
            int mid = (start + end) / 2;
            RecursivePiTask task1 = new RecursivePiTask(start, mid);
            RecursivePiTask task2 = new RecursivePiTask(mid, end);
            task1.fork();
            task2.fork();
            return task1.join() + task2.join();
        }
    }
}
