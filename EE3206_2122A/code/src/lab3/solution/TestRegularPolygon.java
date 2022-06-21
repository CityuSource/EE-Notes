/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab3.solution;

/**
 *
 * @author Van
 */
public class TestRegularPolygon {

    public static void main(String[] args) {

        // Create RegularPolygon object.
        RegularPolygon reg0 = new RegularPolygon();
        RegularPolygon reg1 = new RegularPolygon(6, 4);

        // Print RegularPolygon object values.
        System.out.println(reg0);
        System.out.println(reg1);

        // reg0.setN(2);
        // reg0.setSide(0);
    }

}
