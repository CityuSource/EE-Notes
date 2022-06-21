package ex8;

/**
 *
 * @author vanting
 */
public class HelloRunnable implements Runnable {

    public void run() {
        System.out.println("Hello from a thread!");
    }

    public static void main(String args[]) {
        HelloRunnable task = new HelloRunnable();
        Thread t = new Thread(task);
        t.start();
    }
}
