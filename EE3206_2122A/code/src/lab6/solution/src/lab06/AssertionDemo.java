/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package lab6.solution.src.lab06;

/**
 *
 * @author vanting
 */
class AssertionDemo {

    private static int balance = 900;

    public static void main(String args[]) {
        System.out.println("Acc balance: " + withdrawMoney(500));
        System.out.println("Acc balance: " + withdrawMoney(500));
    }

    public static double withdrawMoney(double amount) {
        // precondition: the balance must be enough for the withdraw amount
        assert balance >= amount : "Insufficient Account Balance: " + (balance - amount);

        balance -= amount;
        return balance;
    }
}
