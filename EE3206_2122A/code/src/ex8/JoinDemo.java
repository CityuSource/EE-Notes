package ex8;

/**
 *
 * @author vanting
 */
public class JoinDemo implements Runnable {

    public void run() {
        for (int i = 0; i < 1000; i++)
            System.out.print("T");
    }

    public static void main(String args[]) throws InterruptedException {
        Thread t = new Thread(new JoinDemo());
        t.start();
        t.join(); // wait for the finish of thread t

        for (int i = 0; i < 1000; i++)
            System.out.print("M");
    }
}
