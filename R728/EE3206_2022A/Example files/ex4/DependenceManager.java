package ex4;

/**
 *
 * @author vanting
 */
public class DependenceManager {

    public static void main(String[] args) {
        Calculator cal = new Calculator();
        cal.addFactorialPlugin(new FactorialImpl1());
        int n = cal.findFactorial(3);
        System.out.println(n);
    }
}
