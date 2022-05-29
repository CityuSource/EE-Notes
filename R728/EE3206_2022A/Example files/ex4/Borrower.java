package ex4;

public class Borrower extends Person {

    private Loan loan;

    /** Construct a borrower with default properties */
    public Borrower() {
        super();
    }

    /** Create a borrower with specified name and address */
    public Borrower(Name name, Address address) {
        super(name, address);
    }

    /** Return loan */
    public Loan getLoan() {
        return loan;
    }

    /** Set a new loan */
    public void setLoan(Loan loan) {
        this.loan = loan;
    }

    /** String representation for borrower */
    public String toString() {
        return super.toString() +
                "Monthly payment is " + loan.getMonthlyPayment() + '\n' +
                "Total payment is " + loan.getTotalPayment();
    }
}
