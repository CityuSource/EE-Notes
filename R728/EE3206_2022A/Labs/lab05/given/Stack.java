/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package lab05.given;

/**
 *
 * @author Van
 * @param <E>
 */
public interface Stack<E> {

    /**
     * Push an element into the stack
     * @param e     the new element to be pushed
     */
    void push(E e);

    /**
     * Remove the top element and return it.
     * @return the top element
     */
    E pop();
    
    /**
     * Return the top element but leave it on the stack.
     * @return the top element
     */
    E peek();
    
    /**
     * @return the number of elements in the stack
     */
    int size();
    
    /**
     * 
     * @return true if the stack is empty; otherwise return false
     */
    boolean isEmpty();
    
}
