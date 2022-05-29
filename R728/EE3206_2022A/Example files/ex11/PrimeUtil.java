/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ex11;

/**
 *
 * @author vanting
 */
public class PrimeUtil {

    private long lastPrime = 1L;

    public long next() // instance method
    {
        lastPrime = next(lastPrime); // call static method
        return lastPrime;
    }

    public static long next(long after) {
        long counter = after;
        while (!isPrime(++counter))
         ;
        return counter;
    }

    public static boolean isPrime(long num) {
        if (num <= 1) {
            return false;
        }

        if (num == 2) {
            return true;
        }

        if (num % 2 == 0) {
            return false;
        }

        long maxDivisor = (long) Math.sqrt(num);
        for (int k = 3; k <= maxDivisor; k += 2) {
            if (num % k == 0) {
                return false;
            }
        }

        return true;
    }
    
}
