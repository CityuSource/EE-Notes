package ex8;

/**
 *
 * @author vanting
 */
public class HelloThread extends Thread {

    @Override
    public void run() {
        System.out.println("Hello from a thread!");
    }

    public static void main(String args[]) {
        Thread t = new HelloThread();
        t.start();
        //t.run();
    }
}
