package ex1;

/**
 *
 * @author vanting
 */
class Student {

    // Declare the variables you need to represent a student
    String name = "";
    double gpa = 0;

    /*  Used to configure the values
        of a student object
     */
    void setup(String studentName, double studentGpa) {
        this.name = studentName;
        this.gpa = studentGpa;
    }

    /** Display the academic
        standing of a student 
     */
    void showAcademicStanding() {

        System.out.print("The Academic Standing of " + this.name + " is: ");
        if(this.gpa > 1.7)
            System.out.println("Good Standing");
        else
            System.out.println("Academic Warning");
    }
}
