package ex1;

class TestMethodOverloading {

    /** Main method */
    public static void main(String[] args) {

        MaxFinder maxer = new MaxFinder();

        // Invoke the max method with int parameters
        System.out.println("The maximum between 3 and 4 is " + maxer.max(3, 4));

        // Invoke the max method with the double parameters
        System.out.println("The maximum between 3.0 and 5.4 is " + maxer.max(3.0, 5.4));

        // Invoke the max method with three double parameters
        System.out.println("The maximum between 3.0, 5.4, and 10.14 is " + maxer.max(3.0, 5.4, 10.14));
    }
}
