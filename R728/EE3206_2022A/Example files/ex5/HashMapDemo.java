/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ex5;

import java.util.HashMap;
import java.util.Map;

/**
 *
 * @author Van
 */
public class HashMapDemo {

    public static void main(String args[]) {
        // create hash map
        Map<Integer, String> map = new HashMap<>();

        // populate hash map
        map.put(1, "Java");
        map.put(2, "teacher");
        map.put(3, "is best");

        // checking collection view of the map
        System.out.println("Key set values are: " + map.keySet());
        System.out.println("Collection view is: " + map.values());

        // get value of key 3
        String val = map.get(3);
        System.out.println("Value for key 3 is: " + val);

        // put new values at key 3
        System.out.println("Put new values at key 3");
        map.put(3, "is great");
        System.out.println("Map value after change: " + map);
    }
}
