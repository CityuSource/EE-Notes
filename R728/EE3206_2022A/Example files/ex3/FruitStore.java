/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package ex3;

/**
 *
 * @author vanting
 */
public class FruitStore {
    
    public static Fruit[] getSomeFruits() {
        Fruit[] someFruits = {new Fruit(), new Apple(), new Banana()};
        return someFruits;
    }
}

class Fruit {
    public void color() {
        System.out.println("**undefined**");
    }
}

class Apple extends Fruit {   
    
    @Override
    public void color() {
        System.out.println("Red");
    }
    
}

class Banana extends Fruit {
    @Override
    public void color() {
        System.out.println("Yellow");
    }
}