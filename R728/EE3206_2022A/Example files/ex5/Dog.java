/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ex5;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;

/**
 *
 * @author Van
 */
class Dog implements Comparable<Dog> {

    private final String name;
    private final int age;

    Dog(String n, int a) {
        name = n;
        age = a;
    }

    public String getDogName() {
        return name;
    }

    public int getDogAge() {
        return age;
    }

    // Overriding the compareTo method
    @Override
    public int compareTo(Dog d) {
        return (this.name).compareTo(d.name);
    }

    public static void main(String args[]) {

        // Takes a list o Dog objects
        List<Dog> list = new ArrayList<>();

        list.add(new Dog("Shaggy", 3));
        list.add(new Dog("Lacy", 2));
        list.add(new Dog("Roger", 10));
        list.add(new Dog("Tommy", 4));
        list.add(new Dog("Tammy", 1));
        Collections.sort(list);             // Sorts the array list

        //printing the sorted list of names
        System.out.println("Sort by natural order (Comparable Interface):");
        for (Dog dog : list) {
            System.out.print(dog.getDogName() + ", ");
        }

        // Sorts the array list using comparator
        Collections.sort(list, new Comparator<Dog>() {
            // Overriding the compare method to sort the age 
            @Override
            public int compare(Dog d1, Dog d2) {
                return d1.age - d2.age;
            }
        });
        System.out.println("\n");

        //printing the sorted list of ages
        System.out.println("Sort by age (Comparator Interface):");
        for (Dog dog : list) {
            System.out.print(dog.getDogName() + ":" + dog.getDogAge() + ", ");
        }

    }
}
