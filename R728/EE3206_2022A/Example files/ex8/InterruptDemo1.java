package ex8;

/**
 *
 * @author vanting
 */
public class InterruptDemo1 implements Runnable {

    public void run() {
        System.err.println("Running");
        while(true) {
            if(Thread.interrupted())
                break;
        }
        System.err.println("Stopped by Interruption.");
    }

    public static void main(String args[]) throws InterruptedException {
        Thread t = new Thread(new InterruptDemo1());
        t.start();
        
        for(int i=10; i>0; i--) {
            Thread.sleep(1000);         // 1 sec
            System.out.print(i + " ");
        }
        System.out.println("");
        t.interrupt();
    }
}
