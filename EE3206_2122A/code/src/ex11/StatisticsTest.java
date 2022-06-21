/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ex11;

import java.util.DoubleSummaryStatistics;
import java.util.List;

/**
 *
 * @author vanting
 */
public class StatisticsTest {

    public static void main(String[] args) {

        // External iteration
        DoubleSummaryStatistics stats = new DoubleSummaryStatistics();

        List<Person> persons = Person.createShortList();
        for (Person p : persons) {
            stats.accept(p.getAge());
        }

        // Get statistics
        System.out.println("Count: " + stats.getCount());
        System.out.println("Average: " + stats.getAverage());
        System.out.println("Sum: " + stats.getSum());
        System.out.println("Min: " + stats.getMin());
        System.out.println("Max: " + stats.getMax());
        
        
        // Alternative design using Stream
        DoubleSummaryStatistics stats2
                = Person.createShortList()
                        .stream()
                        .map(Person::getAge)
                        .collect(DoubleSummaryStatistics::new,
                                DoubleSummaryStatistics::accept,
                                DoubleSummaryStatistics::combine);
        
        // Get statistics
        System.out.println("Count: " + stats2.getCount());
        System.out.println("Average: " + stats2.getAverage());
        System.out.println("Sum: " + stats2.getSum());
        System.out.println("Min: " + stats2.getMin());
        System.out.println("Max: " + stats2.getMax());

    }
}