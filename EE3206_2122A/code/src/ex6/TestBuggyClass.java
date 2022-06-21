package ex6;

import java.io.IOException;

/**
 *
 * @author Van Ting <vanting at gmail.com>
 */
public class TestBuggyClass {
    
    public static void main(String[] args) {
        
        try {
            // open file
            BuggyClass.buggyMethod();
            
            
        } catch (IOException ex) {
            System.out.println(ex.getMessage());
        } catch (Exception ex) {
            System.out.println(ex.getMessage());
        } finally {
            // close file
        }
        
    }

}
