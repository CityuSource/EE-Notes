package ex8;

/**
 *
 * @author vanting
 */
public class InterruptDemo2 implements Runnable {

    public void run() {
        System.err.println("Start to sleep.");
        try {
            Thread.sleep(10000);        // 10 secs
        } catch (InterruptedException ex) {
            System.err.println("Woken up by Interruption.");
            
        }

    }

    public static void main(String args[]) throws InterruptedException {
        Thread t = new Thread(new InterruptDemo2());
        t.start();
        
        for(int i=5; i>0; i--) {
            Thread.sleep(1000);         // 1 sec
            System.out.print(i + " ");
        }
        System.out.println("");
        t.interrupt();
    }
}
