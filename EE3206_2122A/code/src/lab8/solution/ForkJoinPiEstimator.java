/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab8.solution;

import java.util.Random;
import java.util.concurrent.ForkJoinPool;
import java.util.concurrent.RecursiveTask;

/**
 *
 * @author vanting
 */
public class ForkJoinPiEstimator {

    private static final ForkJoinPool POOL = new ForkJoinPool();
    private static final int DARTS = 100_000_000;
    static final int THRESHOLD = 10000;

    public static void main(String[] args) {

        System.out.println("This multithreaded program approximates PI using the Monte Carlo method.");

        long start = System.currentTimeMillis();
        double PI = computePI(DARTS);
        long time = System.currentTimeMillis() - start;

        System.out.println("Computed PI = " + PI + ", Difference = " + Math.abs(PI - Math.PI));
        System.out.println("Running Time (ms): " + time);
        System.out.println("Threshold: " + THRESHOLD);
    }

    public static double computePI(int numThrows) {
        int hits = POOL.invoke(new RecursiveThrowDartTask(numThrows));
        return 4.0 * hits / numThrows;
    }
}

/**
 * Note that a small threshold may result in lower accuracy in the estimation
 * due to the loss of samples in task division
 * 
 * @author cwting
 */
class RecursiveThrowDartTask extends RecursiveTask<Integer> {

    private static final int THRESHOLD = ForkJoinPiEstimator.THRESHOLD;
    private final int numThrows;
    private final Random randomer = new Random();

    public RecursiveThrowDartTask(int numThrows) {
        this.numThrows = numThrows;
    }

    @Override
    protected Integer compute() {
        int hits = 0;

        if (numThrows < THRESHOLD) {
            for (int i = 0; i < numThrows; i++) {
                double x = randomer.nextDouble();
                double y = randomer.nextDouble();
                if (x * x + y * y < 1) {
                    hits++;
                }
            }
        } else {
            int sizeA = (int) Math.ceil(numThrows / 2.0);
            int sizeB = numThrows / 2;

            RecursiveThrowDartTask task1 = new RecursiveThrowDartTask(sizeA);
            RecursiveThrowDartTask task2 = new RecursiveThrowDartTask(sizeB);
            task1.fork();
            task2.fork();
            hits = task1.join() + task2.join();
        }

        return hits;
    }

}
