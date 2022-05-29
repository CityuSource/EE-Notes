/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package ex4;

/**
 *
 * @author vanting
 */
public class Outer {
    
    public static void main(String[] args) {
        Outer o = new Outer();      
        Inner i = o.new Inner();       
    }
    
    // non-static nested class
    public class Inner {
              
    }
}
