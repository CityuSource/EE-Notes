/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package ex8;

/**
 *
 * @author vanting
 */
class Counter {
    
    private int c = 0;

    public void increment() {
        c++;
    }

    public void decrement() {
        c--;
    }

    public int value() {
        return c;
    }

}
