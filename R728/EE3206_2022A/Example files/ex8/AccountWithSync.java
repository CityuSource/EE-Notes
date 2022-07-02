package ex8;


import java.util.concurrent.*;

public class AccountWithSync {

    private Account account = new Account();

    public static void main(String[] args) {
        AccountWithSync awsul = new AccountWithSync();
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

        private int balance = 0;

        public int getBalance() {
            return balance;
        }

        public synchronized void deposit(int amount) {
            
            int newBalance = balance + amount;

            // This delay is deliberately added to magnify the
            // data-corruption problem and make it easy to see.
            try {
                Thread.sleep(1);
            } catch (InterruptedException ex) {
                // do nothing
            }

            balance = newBalance;
        }
    }
}
