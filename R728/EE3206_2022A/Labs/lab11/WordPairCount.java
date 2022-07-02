/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab11;

import java.io.File;
import java.io.IOException;
import java.io.PrintWriter;
import java.net.URI;
import java.net.URISyntaxException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.Arrays;
import java.util.Comparator;
import java.util.Map;
import java.util.function.Function;
import java.util.logging.Level;
import java.util.logging.Logger;
import static java.util.stream.Collectors.counting;
import static java.util.stream.Collectors.groupingBy;
import java.util.stream.Stream;


/**
 *
 * @author vanting
 */
public class WordPairCount {

    public static void main(String[] args) throws URISyntaxException {

        URI file = WordCount.class.getResource("given/MarkTwain.utf8.txt").toURI();
        Path path = Paths.get(file);

        try (Stream<String> lines = Files.lines(path);
                PrintWriter writer = new PrintWriter(new File("paircount.txt"))) {
            
            /* Note that a lambda can only access free variables (the variables in its
            enclosing context) that are final or effectively final.
            
            The variable prev serves as a holder object and is effectively final. The 
            object reference does not change after initialization (effectively final)
            but the object is mutable.
            
            Using such a "hack" will induce side effect to the program and is not  
            a good practice in general. Pure functional program has no side effect at all.
            
            The attempt here does not cause problem because the stream is a sequential 
            stream. For a parallel stream, the result will become unpredictable due to 
            the concurrent access to prev.
            */
            String[] prev = {""};
  
            lines.flatMap(line -> Arrays.stream(line.replaceAll("[^a-zA-Z ]", " ").toLowerCase().split("\\s+")))
                    .filter(w -> !w.isEmpty())
                    .map(w -> {
                        Map.Entry<String, String> pair = Map.entry(prev[0], w);
                        prev[0] = w;
                        return pair;
                    })
                    .collect(groupingBy(Function.identity(), counting()))
                    .entrySet()
                    .stream()
                    .sorted(Map.Entry.comparingByValue(Comparator.reverseOrder()))
                    .limit(10)
                    .peek(System.out::println)
                    .forEach(e -> writer.printf("%s %s=%d\n", e.getKey().getKey(), e.getKey().getValue(), e.getValue()));

        } catch (IOException ex) {
            Logger.getLogger(WordPairCount.class.getName()).log(Level.SEVERE, null, ex);
        }
    }

}
