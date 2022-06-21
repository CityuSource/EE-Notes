package ex7;

import java.io.*;

public class TestBufferedStreams {

    /** Main method
    @param args[0] for sourcefile
    @param args[1] for target file
     */
    public static void main(String[] args) throws IOException {
        // Check command-line parameter usage
        if (args.length != 2) {
            System.out.println(
                    "Usage: java CopyFile sourceFile targetfile");
            System.exit(0);
        }

        // Check if source file exists
        File sourceFile = new File(args[0]);
        if (!sourceFile.exists()) {
            System.out.println("Source file " + args[0] + " not exist");
            System.exit(0);
        }

        // Check if target file exists
        File targetFile = new File(args[1]);
        if (targetFile.exists()) {
            System.out.println("Target file " + args[1] + " already exists");
            System.exit(0);
        }

        // Create an input stream
        BufferedInputStream input = new BufferedInputStream(new FileInputStream(sourceFile));

        // Create an output stream
        BufferedOutputStream output = new BufferedOutputStream(new FileOutputStream(targetFile));

        // Display the file size
        System.out.println("The file " + args[0] + " has " + input.available() + " bytes");

        // Continuously read a byte from input and write it to output
        int r;
        while ((r = input.read()) != -1) {
            output.write(r);
        }

        // Close streams
        input.close();
        output.close();

        System.out.println("Copy done!");
    }
}
