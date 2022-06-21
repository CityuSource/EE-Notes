/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ex5;

/**
 *
 * @author vanting
 */
public class Util {

    public static void main(String[] args) {
        OrderedPair<Integer, String> p1 = new OrderedPair<>(1, "apple");
        OrderedPair<Integer, String> p2 = new OrderedPair<>(2, "pear");
        OrderedPair<Integer, String> p3 = new OrderedPair<>(2, "pear");

        boolean same1 = Util.compare(p1, p2);
        boolean same2 = Util.compare(p2, p3);

        System.out.println((same1) ? "They are the same" : "They are not the same");
        System.out.println((same2) ? "They are the same" : "They are not the same");

    }

    // generic method
    public static <K, V> boolean compare(OrderedPair<K, V> p1, OrderedPair<K, V> p2) {
        return p1.getKey().equals(p2.getKey()) && p1.getValue().equals(p2.getValue());
    }

}
