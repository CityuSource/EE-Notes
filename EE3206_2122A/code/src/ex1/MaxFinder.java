package ex1;

/**
 *
 * @author vanting
 */
class MaxFinder {

    /** Return the max between two int values */
    int max(int num1, int num2) {
        if (num1 > num2) {
            return num1;
        } else {
            return num2;
        }
    }

    /** Find the max between two double values */
    double max(double num1, double num2) {
        if (num1 > num2) {
            return num1;
        } else {
            return num2;
        }
    }

    /** Return the max among three double values */
    double max(double num1, double num2, double num3) {
        return max(max(num1, num2), num3);
    }
}
