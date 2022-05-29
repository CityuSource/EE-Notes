package ex8;

import java.util.concurrent.*;

public class ExecutorDemo implements Runnable {

    private char c;

    ExecutorDemo(char c) {
        this.c = c;
    }

    public void run() {
        for (int i = 0; i < 10; i++) {
            System.out.print(c);
            try {
                Thread.sleep(500);        // half secs
            } catch (InterruptedException ex) {
                // do nothing
            }
        }
    }

    public static void main(String[] args) {

        // Create a fixed thread pool with maximum three threads
        ExecutorService pool = Executors.newFixedThreadPool(3);

        // Submit runnable tasks to the executor
        pool.execute(new ExecutorDemo('a'));
        pool.execute(new ExecutorDemo('b'));
        pool.execute(new ExecutorDemo('c'));
        pool.execute(new ExecutorDemo('d'));

    }
}
