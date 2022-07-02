/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ex8;

import java.util.concurrent.Callable;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.Future;

/**
 *
 * @author vanting
 */
public class MultiThreadMaxFinder {
    
    public static void main(String[] args) throws InterruptedException, ExecutionException  {
        
        int[] array = new int[] {8, 3, 99, 23, 14, 50, 39};
        System.out.println("The max is: " + max(array));
    }

    public static int max(int[] data) throws InterruptedException, ExecutionException {
        
        if (data.length == 0) {
            throw new IllegalArgumentException();
        }

        if (data.length == 1) {
            return data[0];
        }

        // Divide the array into 2 parts.
        // Use a separate thread to find the max in each part.
        int mid = data.length / 2;
        FindMaxTask t1 = new FindMaxTask(data, 0, mid);
        FindMaxTask t2 = new FindMaxTask(data, mid, data.length);

        // Executors is a factory for creating Executor
        // ExecutorService, and ScheduledExecutorService
        ExecutorService s = Executors.newFixedThreadPool(2);

        // Asynchronous tasks
        Future<Integer> f1 = s.submit(t1);
        Future<Integer> f2 = s.submit(t2);

        // When f1.get() is called, the main thread is 
        // blocked and waits for f1 to finish.
        // Similarly for f2.get().
        int result = Math.max(f1.get(), f2.get());
        
        s.shutdown();  // Terminate the threads
        return result;
    }
}

class FindMaxTask implements Callable<Integer> {

    private int[] data;
    private int start, end;

    FindMaxTask(int[] d, int s, int e) {
        data = d;
        start = s;
        end = e;
    }

    // find the max value in data[start..(end-1)]
    public Integer call() {
        int max = data[start];
        for (int i = start + 1; i < end; i++) {
            if (max < data[i]) {
                max = data[i];
            }
        }

        return max;
    }
}
