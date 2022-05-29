package ex7;

import java.io.*;
import java.util.Date;

public class TestObjectStreams {

    public static void main(String[] args) throws ClassNotFoundException, IOException {

        ObjectOutputStream output = new ObjectOutputStream(new FileOutputStream("object.dat"));

        // Write a string, double value, and object to the file
        output.writeUTF("John");
        output.writeDouble(85.5);
        output.writeObject(new Date());

        // Close output stream
        output.close();

        // Create an input stream for file object.dat
        ObjectInputStream input = new ObjectInputStream(new FileInputStream("object.dat"));

        // Write a string, double value, and object to the file
        String name = input.readUTF();
        double score = input.readDouble();
        Date date = (Date) (input.readObject());
        System.out.println(name + " " + score + " " + date);

        // Close output stream
        input.close();
    }
}
