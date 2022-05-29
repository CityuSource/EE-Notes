package ex4;

/**
 *
 * @author vanting
 */
public class Calculator {

    private FactorialInterface factorialPlugin;

    public void addFactorialPlugin(FactorialInterface f) {
        factorialPlugin = f;
    }

    public int findFactorial(int n) {
        return factorialPlugin.factorial(n);
    }

}
