/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ex3;

/**
 *
 * @author Van
 */
public class ConstructorChain {
    public static void main(String[] args) {
        A obj = new A();
        System.out.println(obj.a);
    }
}

class B {

    int b = 10;

    public B() {
        b = 20;
    }
}

class A extends B {

    int a;

    public A() {
        a = super.b;	// what is the value of a??
    }
}