/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ex11;

import java.util.stream.Stream;

/**
 *
 * @author vanting
 */
public class PrimeUtilTest {

    public static void main(String[] args) {
        // Print the first 5 prime numbers: 2, 3, 5, 7, 11
        // Data type L for the seed value must be provided.
        // Compiler uses it to infer the data type of stream elements.
        // Use static method next(long)
        Stream.iterate(2L, PrimeUtil::next) // n -> PrimeUtil.next(n)
                .limit(5)
                .forEach(System.out::println);

        // Alternative design
        Stream.iterate(2L, n -> n + 1)
                .filter(PrimeUtil::isPrime) // n -> PrimeUtil.isPrime(n)
                .limit(5)
                .forEach(System.out::println);

        // Design using the Stream.generate(Supplier) method, 
        // and skip the first 100 prime numbers
        // use member method primeUtilObj.next()
        Stream.generate(new PrimeUtil()::next)
                .skip(100)
                .limit(5)
                .forEach(System.out::println);

        /*
        Supplier<Long> s = new Supplier()
                           {
                              PrimeUtil pu = new PrimeUtil();
                              public Long get()
                              {
                                 return pu.next();
                              }
                           };

        Stream.generate(s)
              .skip(100)
              .limit(5)
              .forEach(System.out::println);
         */
    }

}
