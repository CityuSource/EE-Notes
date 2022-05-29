/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ex8;

import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.ForkJoinPool;
import java.util.concurrent.RecursiveTask;

/**
 *
 * @author vanting
 */
public class ForkJoinTest {

    public static void main(String[] args) {
        ArrayList<Double> list = new ArrayList<>(1000);
        for (int i = 0; i < 1000; i++) {
            list.add(Math.random() * 100.0);
        }

        ParallelSum task = new ParallelSum(list, 0, list.size());

        // Create a ForkJoinPool to run the task  
        ForkJoinPool pool = new ForkJoinPool();

        // Submit the task to the Fork/Join pool for execution 
        double sum = pool.invoke(task);

        System.out.println("Sum is " + sum);
    }
}

class ParallelSum extends RecursiveTask<Double> {

    private static final int THRESHOLD = 100;
    private List<Double> list;
    private int start, end; // sum up elements from start to end-1

    public ParallelSum(List<Double> a, int s, int e) {
        list = a;
        start = s;
        end = e;
    }

    @Override
    protected Double compute() {
        double result = 0;

        // Base case
        if (end - start < THRESHOLD) {
            for (int i = start; i < end; i++) {
                result += list.get(i);
            }
        } else {
            // Divide into 2 sub-tasks
            int mid = (start + end) / 2;
            ParallelSum task1 = new ParallelSum(list, start, mid);
            ParallelSum task2 = new ParallelSum(list, mid, end);

            task1.fork(); // Launch the subtasks
            task2.fork();

            // Wait for subtasks to finish and combine the result  
            result = task1.join()+ task2.join();
        }
        return result;
    }
}
