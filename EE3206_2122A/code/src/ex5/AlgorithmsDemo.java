/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ex5;

import java.util.Collections;
import java.util.Comparator;
import java.util.Iterator;                                                      
import java.util.LinkedList;
import java.util.List;

/**
 *
 * @author Van
 */
public class AlgorithmsDemo {

    public static void main(String args[]) {

        // Create and initialize linked list
        List<Integer> list = new LinkedList<>();
        list.add(0);
        list.add(-8);
        list.add(20);
        list.add(-20);
        list.add(8);

        // Sort ascendingly
        Collections.sort(list);
        System.out.print("List sorted: ");
        for (Integer i : list) {
            System.out.print(i + " ");
        }
        System.out.println();

        // Create a reverse order comparator
        Comparator<Integer> r = Collections.reverseOrder();
        // Sort list by using the comparator
        Collections.sort(list, r);
        System.out.print("List sorted in reverse: ");
        for (Integer i : list) {
            System.out.print(i + " ");
        }
        System.out.println();

        // display randomized list
        Collections.shuffle(list);
        Iterator<Integer> li = list.iterator();
        System.out.print("List shuffled: ");
        while (li.hasNext()) {
            System.out.print(li.next() + " ");
        }
        System.out.println();

        // show minimum and maximum
        System.out.println("Minimum: " + Collections.min(list));
        System.out.println("Maximum: " + Collections.max(list));
    }
}
