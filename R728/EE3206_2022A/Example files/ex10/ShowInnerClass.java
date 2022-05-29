package ex10;

// ShowInnerClass.java: Demonstrate using inner classes
public class ShowInnerClass {
  private int data;

  /** A method in the outer class */
  public void m() {
    // Do something
    InnerClass instance = new InnerClass();    
  }

  // An inner class
  class InnerClass {
    int x;
    /** A method in the inner class */
    public void mi() {
      // Directly reference data and method defined in its outer class
      data++;
      m();
    }
  }
}