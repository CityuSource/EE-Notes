/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ex11;

import java.util.List;
import java.util.Optional;

/**
 *
 * @author vanting
 */
public class TestOptional {
    
    public static void main(String[] args) {
        
        List<Person> list = Person.createShortList();
        testAge(list, 10);
        testAge(list, 25);
    }

    public static void testAge(List<Person> list, int age) {
        // If age is not found, output:
        //    Not Found 
        // If age is found, output:
        //    name

        Optional<String> result = findAge(list, age);

        if (result.isPresent()) {
            // if Optional has a value
            System.out.println(result.get()); // get the value
        } else {
            System.out.println("Not Found");
        }

        // Alternative implementation using orElse()
        System.out.println(result.orElse("Not Found"));

        // If age is found, output name in upper case
        System.out.println(result.map(String::toUpperCase).orElse("Not Found"));
    }

    static Optional<String> findAge(List<Person> list, int age) {
        for (Person s : list) {
            if (s.getAge() == age) {
                return Optional.of(s.getName());
            }
        }

        return Optional.empty(); // name not found
    }

    static void testFn(List<Person> list) {

        Optional<String> result = findAge(list, 1234);

    }

}
