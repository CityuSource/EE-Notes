package hw1.S55724681;

public class Rat {
    public String name;

    public Rat(){ //Default Constructor
        name = "Rat";
    }

    public Rat(String name){
        this.name = name;
    }

    public char roll() {            // Roll the dice to decide the direction the mouse is going to
        double dice = Math.random();
        return (dice <= 0.3) ? 'N' : (dice <= 0.6) ? 'E' : (dice <= 0.8) ? 'S' : 'W';
    }
}