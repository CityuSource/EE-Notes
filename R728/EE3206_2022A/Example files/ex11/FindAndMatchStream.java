/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ex11;

import static ex11.Person.Gender.MALE;
import java.util.List;
import java.util.Optional;

/**
 *
 * @author vanting
 */
public class FindAndMatchStream {
    
    public static void main(String[] args) {
        
        List<Person> persons = Person.createShortList();

        // Check if all persons in the list are male
        boolean allMales = persons.stream().allMatch(person -> person.getGender() == MALE);

        // Check if any person is at 25
        boolean anyoneAt25 = persons.stream().anyMatch(person -> person.getAge() == 25);

        // Find the first male
        Optional<Person> firstMale
                = persons.stream()
                        .filter(person -> person.getGender() == MALE)
                        .findFirst();
        
        System.out.println(allMales);
        System.out.println(anyoneAt25);
        System.out.println(firstMale);
        
    }
    
}
