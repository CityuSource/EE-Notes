/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ex8;

import java.util.concurrent.atomic.AtomicInteger;

/**
 *
 * @author vanting
 */
class NonAtomicNum {

    // regular int variables are non-atomic
    private int value;

    public NonAtomicNum(int v) {
        this.value = v;
    }

    public int get() {
        return value;
    }

    public int incrementAndGet() {
        return ++value;
    }

    public int decrementAndGet() {
        return --value;
    }

    /*
    public synchronized int incrementAndGet() {
        return ++value;
    }
    
    public synchronized int decrementAndGet() {
        return --value;
    }
     */
}

class MyRaceThread implements Runnable {

    private final boolean isAdd;

    public MyRaceThread(boolean isAdd) {
        this.isAdd = isAdd;
    }

    @Override
    public void run() {
        if (isAdd) {
            for (int i = 0; i < 10000; i++) {
                RaceCondition.num.incrementAndGet();
            }
        } else {
            for (int i = 0; i < 10000; i++) {
                RaceCondition.num.decrementAndGet();
            }
        }
    }
}

public class RaceCondition {

    public static NonAtomicNum num = new NonAtomicNum(0);
    //public static AtomicInteger num = new AtomicInteger(0);

    public static void main(String[] args) {

        Thread add = new Thread(new MyRaceThread(true));
        Thread minus = new Thread(new MyRaceThread(false));

        add.start();
        minus.start();

        /*
         * wait both threads to finish
         */
        try {
            add.join();
            minus.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        // the expected output should be zero
        System.out.println(num.get());
    }

}
