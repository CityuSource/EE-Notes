package ex8;
import java.util.concurrent.*;
import java.util.concurrent.locks.*;

public class ThreadCooperation {

    private Account account = new Account();

    public static void main(String[] args) {
        ThreadCooperation tc = new ThreadCooperation();
        tc.start();
    }

    public void start() {
        // Create a thread pool with two threads
        ExecutorService executor = Executors.newFixedThreadPool(2);
        executor.execute(new DepositTask());
        executor.execute(new WithdrawTask());
        executor.shutdown();

        System.out.println("Thread 1\t\tThread 2\t\tBalance");
    }

    // A task for adding an amount to the account
    public class DepositTask implements Runnable {

        public void run() {
            try { // Purposely delay it to let the withdraw method proceed
                while (true) {
                    account.deposit((int) (Math.random() * 10) + 1);
                    Thread.sleep(1000);
                }
            } catch (InterruptedException ex) {
                ex.printStackTrace();
            }
        }
    }

    // A task for subtracting an amount from the account
    public class WithdrawTask implements Runnable {

        public void run() {
            while (true) {
                account.withdraw((int) (Math.random() * 10) + 1);
            }
        }
    }

    // An inner class for account
    private class Account {
        // Create a new lock
        private ReentrantLock lock = new ReentrantLock();        // Create a condition
        private Condition newDeposit = lock.newCondition();
        private int balance = 0;

        public int getBalance() {
            return balance;
        }

        public void withdraw(int amount) {
            lock.lock(); // Acquire the lock
            try {
                while (balance < amount) {
                    newDeposit.await();
                }
                balance -= amount;
                System.out.println("\t\t\tWithdraw " + amount + "\t\t" + getBalance());
            } catch (InterruptedException ex) {
                ex.printStackTrace();
            } finally {
                lock.unlock(); // Release the lock
            }
        }

        public void deposit(int amount) {
            lock.lock(); // Acquire the lock
            try {
                balance += amount;
                System.out.println("Deposit " + amount + "\t\t\t\t\t" + getBalance());

                // Signal thread waiting on the condition
                newDeposit.signalAll();
            } finally {
                lock.unlock(); // Release the lock
            }
        }
    }
}
