/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab05;

import java.util.TreeSet;
import java.util.Set;

/**
 *
 * @author Van
 */
public class Fruits {

    public static void main(String[] args) {

        Set<String> setA = new TreeSet<>();
        setA.add("apple");
        setA.add("banana");
        setA.add("durian");
        setA.add("grape");
        setA.add("papaya");
        System.out.print("Set A: ");
        System.out.println(setA);

        Set<String> setB = new TreeSet<>();
        setB.add("banana");
        setB.add("mango");
        setB.add("papaya");
        setB.add("tomato");
        setB.add("watermelon");
        System.out.print("Set B: ");
        System.out.println(setB);

        System.out.print("Union: ");
        Set<String> union = new TreeSet<>();
        union.addAll(setA);
        union.addAll(setB);
        System.out.println(union);

        System.out.print("Intersection: ");
        Set<String> intersection = new TreeSet<>();
        intersection.addAll(setA);
        intersection.retainAll(setB);
        System.out.println(intersection);

        System.out.print("Complement of A: ");
        Set<String> compA = new TreeSet<>(setB);
        compA.removeAll(setA);
        System.out.println(compA);

        System.out.print("Complement of B: ");
        Set<String> compB = new TreeSet<>(setA);
        compB.removeAll(setB);
        System.out.println(compB);

    }

}
