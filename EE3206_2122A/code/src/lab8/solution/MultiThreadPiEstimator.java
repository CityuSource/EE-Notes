/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab8.solution;

import java.util.ArrayList;
import java.util.List;
import java.util.Random;
import java.util.concurrent.Callable;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.Future;

/**
 *
 * @author vanting
 */
public class MultiThreadPiEstimator {

    private static final int DARTS = 100000000;
    private static final int TASKS = 100;
    // private static final ExecutorService POOL = Executors.newCachedThreadPool();
    private static final ExecutorService POOL = Executors.newFixedThreadPool(TASKS);

    public static void main(String[] args) throws InterruptedException, ExecutionException {

        System.out.println("This multithreaded program approximates PI using the Monte Carlo method.");

        long start = System.currentTimeMillis();
        double PI = computePI(DARTS, TASKS);
        long time = System.currentTimeMillis() - start;

        POOL.shutdown(); // Terminate the threads
        System.out.println("Computed PI = " + PI + ", Difference = " + Math.abs(PI - Math.PI));
        System.out.println("Running Time (ms): " + time);
        System.out.println("Level of paralleism: " + TASKS);
    }

    // public static double computePI(int numThrows) throws InterruptedException,
    // ExecutionException {
    // ThrowDartTask t1 = new ThrowDartTask(numThrows/2);
    // ThrowDartTask t2 = new ThrowDartTask(numThrows/2);
    // Future<Integer> f1 = POOL.submit(t1);
    // Future<Integer> f2 = POOL.submit(t2);
    // int hits = f1.get() + f2.get();
    // return 4.0 * hits / numThrows;
    // }

    public static double computePI(int numThrows, int numTasks) throws InterruptedException, ExecutionException {
        List<ThrowDartTask> tasks = new ArrayList<>();
        for (int i = 0; i < numTasks; i++)
            tasks.add(new ThrowDartTask(numThrows / numTasks));

        int hits = 0;
        for (Future<Integer> f : POOL.invokeAll(tasks)) {
            hits += f.get();
        }
        return 4.0 * hits / numThrows;
    }
}

class ThrowDartTask implements Callable<Integer> {

    private final int numThrows;
    private final Random randomer = new Random();

    public ThrowDartTask(int numThrows) {
        this.numThrows = numThrows;
    }

    @Override
    public Integer call() {
        int hits = 0;

        for (int i = 0; i < numThrows; i++) {

            // Math.random is a synchronized method
            // double x = Math.random();
            // double y = Math.random();

            // reduce contention for each thread to have its own
            // pseudorandom-number generator
            double x = randomer.nextDouble();
            double y = randomer.nextDouble();

            if (x * x + y * y < 1)
                hits++;
        }

        return hits;
    }

}
