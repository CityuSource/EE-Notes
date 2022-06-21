/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ex11;

/**
 *
 * @author vanting
 */
interface MyInterface {

    /* This is a default method so we need not
     * to implement this method in the implementation 
     * classes  
     */
    default void newMethod() {
        System.out.println("Newly added default method");
    }

    /* This is a static method. Static method in interface is
     * similar to default method except that we cannot override 
     * them in the implementation classes.
     * Similar to default methods, we need to implement these methods
     * in implementation classes so we can safely add them to the 
     * existing interfaces.
     */
    static void anotherNewMethod() {
        System.out.println("Newly added static method");
    }

    /* Already existing public and abstract method
     * We must need to implement this method in 
     * implementation classes.
     */
    void existingMethod(String str);
}

public class Java8InterfaceExample implements MyInterface {
    
    // implementing abstract method
    public void existingMethod(String str) {
        System.out.println("String is: " + str);
    }

    public static void main(String[] args) {
        Java8InterfaceExample obj = new Java8InterfaceExample();
        //calling the default method of interface
        obj.newMethod();
        //calling the static method of interface
        MyInterface.anotherNewMethod();
        //calling the abstract method of interface
        obj.existingMethod("Java 8 is easy to learn");

    }
}
