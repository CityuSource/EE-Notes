
package ex4;

/**
 *
 * @author vanting
 */
public class FactorialImpl2 implements FactorialInterface {

    public int factorial(int n) {
        if (n == 0) {
            return 1;
        } else {
            int product = 1;
            for (int i = 2; i <= n; i++) {
                product *= i;
            }
            return product;
        }
    }
}
