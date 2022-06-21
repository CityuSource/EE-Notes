package ex7;

import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;

/**
 *
 * @author vanting
 */
public class TestFileReaderWriter {

    public static void main(String[] args) throws IOException {
        
        System.out.println("Default Charsets: " + Charset.defaultCharset() );
        
        // Create an output stream to the file
        FileWriter output = new FileWriter("temp.txt");

        // Output some texts to the file
        output.write("Hello World!\n");
        output.write("Hello Java!\n");
        output.write("0123456789");
        
        // Close the output stream
        output.close();

        // Create an input stream for the file
        FileReader input = new FileReader("temp.txt");

        // Read values from the file
        int value;
        while ((value = input.read()) != -1) {
            System.out.print((char)value);
        }
        System.out.println("");
        // Close the output stream
        input.close();
        
        // =================================================== UTF-8
        
        // Create an output stream to the file
        FileWriter output2 = new FileWriter("temp.utf8.txt", StandardCharsets.UTF_8);

        // Output some texts to the file
        output2.write("Hello World!\n");
        output2.write("你好，世界!\n");
        
        // Close the output stream
        output2.close();

        // Create an input stream for the file
        FileReader input2 = new FileReader("temp.utf8.txt", StandardCharsets.UTF_8);

        // Read values from the file
        while ((value = input2.read()) != -1) {
            System.out.print((char)value);
        }

        // Close the output stream
        input2.close();
    }

}
