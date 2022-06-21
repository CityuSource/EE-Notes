/*
 * Student Name:
 * Student ID:
 */
package a2122.exam;


import java.util.concurrent.RecursiveAction;

/*===================================================================================================

1. Read the questions and the method requirements carefully. 
2. You should only write code inside the methods and import the necessary packages. 
   Do not modify any other parts in this template.

 ====================================================================================================*/

/**
 * A task designed for doing merge sort using Fork-Join framework.
 *
 * @param <E>   the type of elements to be sorted
 */
public class Q2_XXXXXXXX<E extends Comparable> extends RecursiveAction {

    // the array to be sorted
    private final E[] list;

    /**
     * Constructor of this recursive task.
     * 
     * @param list  the array to be sorted, which is passed by reference
     */
    public Q2_XXXXXXXX(E[] list) {
        this.list = list;
    }

    /**
     * This method implements merge sort using a recursive approach.
     * When this method returns, the data field E[] list should be sorted.
     */
    @Override
    protected void compute() {

        
        
    }

    /**
     * Merge two sorted arrays and maintain the ascending order.
     *
     * @param <E>       the type of elements in the lists
     * @param first     the first sorted array to be merged
     * @param second    the second sorted array to be merged
     * @param merged    the target array where first and second are merged into
     */
    public static <E extends Comparable> void merge(E[] first, E[] second, E[] merged) {

        
                
    }

    /**
     * Complete the main method as follows:
     * 1. Initialize an Integer array with five random number between 1 to 100.
     * 2. Create a Fork-Join pool to execute the sort task on the Integer array.
     * 3. Print out the sorted output.
     */
    public static void main(String[] args) {

        
        
    }

}
