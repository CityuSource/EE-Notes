package ex7;

import java.io.File;

public class TestFileClass {

    public static void main(String[] args) {
        File file = new File("image/us.gif");
        System.out.println("Absolute path is " + file.getAbsolutePath());
        System.out.println("Relative path is " + file.getPath());
        System.out.println("Last modified on " + new java.util.Date(file.lastModified()));
        System.out.println("Does it exist? " + file.exists());
        System.out.println("Can it be read? " + file.canRead());
        System.out.println("Can it be written? " + file.canWrite());
        System.out.println("Is it a directory? " + file.isDirectory());
        System.out.println("Is it a file? " + file.isFile());
        System.out.println("Is it hidden? " + file.isHidden());        
    }
}
