package ex4;

public class InterfaceDemo {

    public static void main(String[] args) {
        Colorable[] fruits = {new Apple(), new Banana()};
        findEdibleFruitColor(fruits);
    }

    public static void findEdibleFruitColor(Colorable[] fruits) {
        for(int i=0; i<fruits.length; i++)
            if(fruits[i] instanceof Edible)
                fruits[i].color();
    }
}

class Apple implements Colorable, Edible {

    @Override
    public void color() {
        System.out.println("Red");
    }
    
    @Override
    public void eat() {
        System.out.println("I'm juicy");
    }
    
}

class Banana implements Colorable {

    @Override
    public void color() {
        System.out.println("Yellow");
    }
}
