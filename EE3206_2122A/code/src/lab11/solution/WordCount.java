/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab11.solution;

import java.io.IOException;
import java.net.URI;
import java.net.URISyntaxException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.Arrays;
import java.util.logging.Level;
import java.util.logging.Logger;
import static java.util.stream.Collectors.counting;
import static java.util.stream.Collectors.groupingBy;
import java.util.stream.Stream;

/**
 *
 * @author vanting
 */
public class WordCount {

    public static void main(String[] args) throws URISyntaxException {

        URI file = WordCount.class.getResource("given/MarkTwain.utf8.txt").toURI();
        Path path = Paths.get(file);

        try (Stream<String> lines = Files.lines(path)) {

            lines.flatMap(line -> Arrays.stream(line.replaceAll("[^a-zA-Z ]", " ").toLowerCase().split("\\s+")))
                    .filter(w -> !w.isEmpty())
                    // .peek(System.out::println)
                    .collect(groupingBy(w -> w, counting())) // terminal operation
                    .entrySet().stream().sorted((e1, e2) -> (int) (e2.getValue() - e1.getValue())).limit(10)
                    .forEach(System.out::println); // terminal operation

        } catch (IOException ex) {
            Logger.getLogger(WordCount.class.getName()).log(Level.SEVERE, null, ex);
        }
    }

}
