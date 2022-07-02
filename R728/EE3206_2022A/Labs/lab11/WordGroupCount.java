/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab11;

import java.io.IOException;
import java.net.URI;
import java.net.URISyntaxException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.Arrays;
import java.util.Map;
import java.util.logging.Level;
import java.util.logging.Logger;
import java.util.stream.Collectors;
import java.util.stream.Stream;

/**
 *
 * @author vanting
 */
public class WordGroupCount {

    public static void main(String[] args) throws URISyntaxException {

        URI file = WordCount.class.getResource("given/MarkTwain.utf8.txt").toURI();
        Path path = Paths.get(file);

        try (Stream<String> lines = Files.lines(path)) {

            lines.flatMap(line -> Arrays.stream(line.replaceAll("[^a-zA-Z ]", " ").toLowerCase().split("\\s+")))
                    .parallel()
                    .filter(w -> !w.isEmpty())
                    .map(w -> w.charAt(0))
                    .collect(Collectors.toMap(w -> w, w -> 1, Integer::sum))
                    .entrySet()
                    .stream()
                    .sorted(Map.Entry.comparingByKey())
                    .forEach(System.out::println);

        } catch (IOException ex) {
            Logger.getLogger(WordGroupCount.class.getName()).log(Level.SEVERE, null, ex);
        }
    }

}
