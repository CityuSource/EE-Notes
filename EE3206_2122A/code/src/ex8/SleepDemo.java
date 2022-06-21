
package ex8;

/**
 *
 * @author vanting
 */
public class SleepDemo {

    public static void main(String args[]) throws InterruptedException {
        System.out.print("Thinking");
        for(int i=0; i<20; i++) {
            Thread.sleep(1000);      //Pause for 1 seconds
            System.out.print(".");
        }
        System.out.println("Done!");
    }
}
