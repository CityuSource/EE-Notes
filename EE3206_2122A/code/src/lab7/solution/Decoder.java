/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package lab7.solution;

import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.Scanner;

/**
 *
 * @author vanting
 */
public class Decoder {

    public static void main(String[] args) throws IOException {

        decode("bean.dat", "bean.txt");
        showPic("bean.txt");
    }

    public static void decode(String src, String tar) throws IOException {

        BufferedInputStream in = new BufferedInputStream(new FileInputStream(src));
        BufferedOutputStream out = new BufferedOutputStream(new FileOutputStream(tar));

        int codeSymbol = 0;
        int codeCount = 0;

        try {
            while (true) {
                codeSymbol = in.read();
                codeCount = in.read();
                if (codeCount == -1) {
                    break;
                } else {
                    for (int i = 0; i < codeCount; i++) {
                        out.write(codeSymbol);
                    }
                }
            }

        } catch (IOException ioe) {
            System.out.println("IO Error during decoding" + ioe);
        } finally {
            in.close();
            out.close();
        }
    }

    public static void showPic(String filename) throws FileNotFoundException {
        Scanner scanner = new Scanner(new File(filename));
        while (scanner.hasNextLine())
            System.out.println(scanner.nextLine());
    }

}
