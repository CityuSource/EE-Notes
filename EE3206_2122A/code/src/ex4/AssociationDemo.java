package ex4;

/**
 *
 * @author vanting
 */
public class AssociationDemo {

    public static void main(String[] args) {

        Student peter = new Student("Peter");
        Student mary = new Student("Mary");
        Student john = new Student("John");

        Course chinese = new Course("Chinese");
        Course english = new Course("English");
        Course maths = new Course("Maths");

        enroll(maths, peter);
        enroll(maths, john);
        enroll(chinese, peter);
        enroll(chinese, mary);
        enroll(english, mary);
        enroll(english, john);

        chinese.showList();
        english.showList();
        maths.showList();
        john.showList();
        mary.showList();
        peter.showList();
    }

    static void enroll(Course course, Student student) {
        // associate objects here
        course.addStudent(student);
        student.addCourse(course);
    }
}

class Student {
    private static final int MAX = 3;
    private int count = 0;
    private Course[] courseList;
    private String name;

    Student(String name) {
        this.name = name;
        courseList = new Course[MAX];
    }

    public void addCourse(Course course) {
        if(count < MAX)
            courseList[count++] = course;
    }

    @Override
    public String toString() {
        return name;
    }

    public void showList() {
        System.out.print(name + ": ");
        for(int i=0; i<count; i++)
            System.out.print(courseList[i] + " / ");
        System.out.println("");
    }
}

class Course {
    private static final int MAX = 10;
    private int count = 0;
    private Student[] studentList;
    private String name;

   Course(String name) {
        this.name = name;
        studentList = new Student[MAX];
    }

    public void addStudent(Student student) {
        if(count < MAX)
            studentList[count++] = student;
    }

    @Override
    public String toString() {
        return name;
    }

    public void showList() {
        System.out.print(name + ": ");
        for(int i=0; i<count; i++)
            System.out.print(studentList[i] + " / ");
        System.out.println("");
    }
}