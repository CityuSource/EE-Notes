package ex1;

/**
 * The main/business logic comes here. This program makes use of the Student class 
 * to check student's standing.
 * 
 * @author vanting
 */
class FindAcademicStanding {
    // This is the entry point of a program
    public static void main(String[] args) {

        //System.out.println(args[0]);

        // create two objects of Student type
        Student bill = new Student();
        Student larry = new Student();

        // configure their name and gpa
        bill.setup("Bill Chan", 1.5);
        larry.setup("Larry Chow", 4);

        // display their academic standing
        bill.showAcademicStanding();
        larry.showAcademicStanding();
    }
}
