/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ex11;

import ex11.Person.Gender;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.SortedSet;
import java.util.TreeSet;
import java.util.stream.Collectors;

/**
 *
 * @author cwting
 */
public class CollectorTest {

    public static void main(String[] args) {

        List<Person> persons = Person.createShortList();

        List<String> names = persons.stream()
                .map(Person::getName)
                .collect(ArrayList::new,
                        ArrayList::add,
                        ArrayList::addAll);

        names.forEach(name -> System.out.println(name));
        System.out.println("");

        // using Collectors below
        List<String> nameList = persons.stream()
                .map(Person::getName)
                .collect(Collectors.toList());

        nameList.forEach(name -> System.out.println(name));
        System.out.println("");

        // To obtain a set of unique names (removing duplicates)
        Set<String> nameSet = persons.stream()
                .map(Person::getName)
                .collect(Collectors.toSet());

        nameSet.forEach(name -> System.out.println(name));
        System.out.println("");

        // To obtain a set of unique names sorted in natural order
        SortedSet<String> uniqueSortedNames = persons.stream()
                .map(Person::getName)
                .collect(Collectors.toCollection(TreeSet::new));
        
        uniqueSortedNames.forEach(name -> System.out.println(name));
        System.out.println("");
        
        // To obtain a map of email to name
        Map<String, String> email2Name = persons.stream()
                .collect(Collectors.toMap(
                        Person::getEmail,       // keyMapper 
                        Person::getName));      // valueMapper
        
        email2Name.forEach((email, name) -> System.out.println(email + " : " + name));
        System.out.println("");
        
        // To join the name of each person with a comma separator
        String joinedNames = persons.stream().map(Person::getName)
                .collect(Collectors.joining(", "));
        System.out.println(joinedNames);
        System.out.println("");
        
        // To group people by their gender
        Map<Gender, List<Person>> peopleByGender = persons.stream()
                .collect(Collectors.groupingBy(Person::getGender));
        System.out.println(peopleByGender);
        System.out.println("");
        
        // To count people by their gender
        Map<Gender, Long> countPeopleByGender = persons.stream()
                .collect(Collectors.groupingBy(Person::getGender, Collectors.counting()));
        System.out.println(countPeopleByGender);
        System.out.println("");
        
        // To group people by their gender, then by suranme
        Map<Gender, Map<String, List<Person>>> peopleByGenderBySurName = persons.stream()
                .collect(Collectors.groupingBy(Person::getGender, 
                        Collectors.groupingBy(Person::getSurName)));
        System.out.println(peopleByGenderBySurName);
        System.out.println("");
        
        // To partition people by their age
        Map<Boolean, List<Person>> peopleByAge = persons.stream()
                .collect(Collectors.groupingBy(person -> person.getAge() > 50));
        System.out.println(peopleByAge);
        System.out.println("");

    }

}
