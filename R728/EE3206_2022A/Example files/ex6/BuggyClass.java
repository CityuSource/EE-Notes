package ex6;

import java.util.Random;

/**
 *
 * @author Van Ting <vanting at gmail.com>
 */
public class BuggyClass {
    
    private static Random rand = 
            new Random(System.currentTimeMillis());
    
    // trouble function here
    public static void buggyMethod() throws Exception { 
        
        if(rand.nextBoolean()) {
            Exception ex = new Exception("Something wrong");
            throw ex;
        }
        else
            return;
    }

}
