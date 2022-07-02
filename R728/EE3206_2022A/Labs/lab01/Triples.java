/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package lab01;

/**
 *
 * @author vanting
 */
public class Triples {

    public static void main(String[] args) {
        System.out.println(hasTriples(new int[]{1, 1, 2, 2, 1}));
        System.out.println(hasTriples(new int[]{1, 1, 2, 2, 2, 1}));
        System.out.println(hasTriples(new int[]{1, 1, 1, 2, 2, 2, 1}));
    }

    public static boolean hasTriples(int[] nums) {

        for (int i = 0; i < (nums.length - 2); i++) {
            int first = nums[i];
            if (nums[i + 1] == first && nums[i + 2] == first) {
                return true;
            }
        }

        return false;
    }
}
