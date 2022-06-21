package ex2;

import java.util.Date;

/**
 *
 * @author vanting
 */
public class DateDemo {

    public static void main(String[] args) {
        // System.out.println(System.currentTimeMillis());
        System.out.println(new Date(System.currentTimeMillis() + 60 * 60 * 1000));
    }

}
