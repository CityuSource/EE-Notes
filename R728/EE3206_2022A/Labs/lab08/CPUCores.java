/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab08;

/**
 *
 * @author vanting
 */
public class CPUCores {
    
    public static void main(String[] args) {
        
        int cores = Runtime.getRuntime().availableProcessors();
        System.out.println("Number of logical cores: " + cores);
        
    }
}
