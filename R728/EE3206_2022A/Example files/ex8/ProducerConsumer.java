/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ex8;

import java.util.concurrent.locks.Condition;
import java.util.concurrent.locks.ReentrantLock;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author vanting
 */


public class ProducerConsumer {

    public static Account num = new Account(0);

    public static void main(String[] args) {

        Thread add = new Thread(new MyPCThread(true));
        Thread minus = new Thread(new MyPCThread(false));

        add.start();
        minus.start();
    }

}

class Account {

    private int balance;

    private ReentrantLock lock = new ReentrantLock();   // Create a new lock
    private Condition newDeposit = lock.newCondition();     // Create a condition

    public Account(int v) {
        this.balance = v;
    }

    public int get() {
        return balance;
    }

    public int incrementRandomAndGet() {
        lock.lock();
        int amount = (int) (Math.random() * 50) + 1;
        balance += amount;
        System.out.println("Balance: " + balance + " (+" + amount + ")");
        try {
            newDeposit.signalAll();
        } finally {
            lock.unlock();
        }
        return balance;
    }

    public int decrementRandomAndGet() {
        lock.lock();
        int amount = (int) (Math.random() * 10) + 1;
        try {
            while (balance < amount) {
                System.out.println("Not enough balance...");
                newDeposit.await();
                System.out.println("OK, enough.");
            }
            balance -= amount;
            System.out.println("Balance: " + balance + " (-" + amount + ")");
        } catch (InterruptedException ex) {
            Logger.getLogger(Account.class.getName()).log(Level.SEVERE, null, ex);
        } finally {
            lock.unlock();
        }
        return balance;
    }
}

class MyPCThread implements Runnable {

    private final boolean isAdd;

    public MyPCThread(boolean isAdd) {
        this.isAdd = isAdd;
    }

    @Override
    public void run() {
        if (isAdd) {
            while (true) {
                ProducerConsumer.num.incrementRandomAndGet();
                try {   
                    Thread.sleep(3000);
                } catch (InterruptedException ex) {
                    Logger.getLogger(MyPCThread.class.getName()).log(Level.SEVERE, null, ex);
                }
            }
        } else {
            while (true) {
                try {
                    // this thread run 10x faster
                    Thread.sleep(300);
                } catch (InterruptedException ex) {
                    Logger.getLogger(MyPCThread.class.getName()).log(Level.SEVERE, null, ex);
                }
                ProducerConsumer.num.decrementRandomAndGet();
            }
        }
    }
}

