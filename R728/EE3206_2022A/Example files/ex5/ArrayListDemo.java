/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ex5;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/**
 *
 * @author Van
 */
public class ArrayListDemo {

    public static void main(String args[]) {

        // create an empty array list1 with an initial capacity
        List<Integer> list1 = new ArrayList<>(5);

        // use add() method to add elements in the list
        list1.add(12);
        list1.add(20);
        list1.add(45);

        // let us print all the elements available in list1
        System.out.println("Printing list1:");
        for (Integer number : list1) {
            System.out.println("Number = " + number);
        }

        // create an empty array list2 with an initial capacity
        List<Integer> list2 = new ArrayList<>(5);

        // use add() method to add elements in list2
        list2.add(25);
        list2.add(30);
        list2.add(31);
        list2.add(35);

        // let us print all the elements available in list2
        System.out.println("Printing list2:");
        Iterator<Integer> it = list2.iterator();
        while(it.hasNext())
            System.out.println("Number = " + it.next());
       

        // inserting all elements, list2 will get printed after list1
        list1.addAll(list2);

        System.out.println("Printing all the elements");
        // let us print all the elements available in list1
        int len = list1.size();
        for (int i=0; i<len; i++) {
            System.out.println("Number = " + list1.get(i));
        }
    }
}
