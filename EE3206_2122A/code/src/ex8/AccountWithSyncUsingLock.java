package ex8;

import java.util.concurrent.*;
import java.util.concurrent.locks.*;

public class AccountWithSyncUsingLock {

    private Account account = new Account();

    public static void main(String[] args) {
        AccountWithSyncUsingLock awsul = new AccountWithSyncUsingLock();
        awsul.start();
    }

    public void start() {
        ExecutorService executor = Executors.newCachedThreadPool();

        // Create and launch 100 threads
        for (int i = 0; i < 100; i++) {
            executor.execute(new AddAPennyThread());
        }

        executor.shutdown();

        // Wait until all tasks are finished
        while (!executor.isTerminated()) {
        }

        System.out.println("What is the balance ? " + account.getBalance());
    }

    // An inner class of task for adding a penny to the account
    private class AddAPennyThread implements Runnable {

        public void run() {
            account.deposit(1);
        }
    }

    // An inner class for account
    private class Account {

        private ReentrantLock lock = new ReentrantLock(); // Create a lock
        private int balance = 0;

        public int getBalance() {
            return balance;
        }

        public void deposit(int amount) {
            lock.lock(); // Acquire the lock

            try {
                int newBalance = balance + amount;

                // This delay is deliberately added to magnify the
                // data-corruption problem and make it easy to see.
                Thread.sleep(5);

                balance = newBalance;
            } catch (InterruptedException ex) {
            } finally {
                lock.unlock(); // Release the lock
            }
        }
    }
}
