package ex4;

/**
 *
 * @author vanting
 */
public class FactorialImpl1 implements FactorialInterface {

    public int factorial(int n) {
        if(n == 0)
            return 1;
        else
            return n * factorial(n-1);
    }

}
