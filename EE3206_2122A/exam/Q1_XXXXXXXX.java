/*
 * Student Name:
 * Student ID:
 */
package a2122.exam;


import java.util.List;
import java.util.Map.Entry;
import java.util.stream.Stream;

/*===================================================================================================

You are given a CSV data file (athletes.csv) and asked to write a program to
analyze the content. The main method has been written for you. 

1. Read the questions and the method requirements carefully. 
2. You should only write code inside the methods and import the necessary packages. 
   Do not modify any other parts in this template.
3. Though you may observe some data patterns in the CSV file, you should 
   not assume any pre-condition of your program input unless specified explicitly.

Expected programm output:

The highest paid athlete in 2021: Conor McGregor
The highest paid athlete in 1990: Mike Tyson

The most frequent athlete is: Tiger Woods=25

The total income of the top 10 athletes in 2021: 1052.0
The total income of the top 10 athletes in 1990: 128.4

The most frequent sport is: Basketball=403

 ====================================================================================================*/

public class Q1_XXXXXXXX {

    public static void main(String[] args) {

        // Load the CSV data file. Each row is converted to an instance of Athlete and saved to a list.
        String filepath = Q1_XXXXXXXX.class.getResource("athletes.csv").getFile();
        List<Athlete> records = loadCsvFile(filepath);

        System.out.println("The highest paid athlete in 2021: " + highestIncome(records, 2021));
        System.out.println("The highest paid athlete in 1990: " + highestIncome(records, 1990));
        System.out.println("");
        
        System.out.println("The most frequent athlete is: " + mostFrequentAthlete(records));
        System.out.println("");

        System.out.println("The total income of the top 10 athletes in 2021: " + topTenIncome(records.stream(), 2021));
        System.out.println("The total income of the top 10 athletes in 1990: " + topTenIncome(records.stream(), 1990)); 
        System.out.println("");
        
        System.out.println("The most frequent sport is: " + mostFrequentSport(records.stream()));

    }
    
    /**
     * Create a list of athletes from the given CSV file.
     * 
     * @param filepath  the full file path to the CSV file
     * @return          a list of athletes
     */
    static List<Athlete> loadCsvFile(String filepath) {
        
        
        return null;    // dummy statement
    }

    /**
     * Find the name of athlete having highest income in a given year.
     *
     * @param records   a list of athletes from the CSV file
     * @param year      a specific year
     * @return          the name of athlete having highest income in the year
     */
    static String highestIncome(List<Athlete> records, int year) {
        

        return null;    // dummy statement
    }
    
    /**
     * Find the most frequent athlete on the list.
     * 
     * @param records   a list of athletes from the CSV file
     * @return          an entry where the key is the name of the athlete and the value is the count.
     */
    static Entry<String, Long> mostFrequentAthlete(List<Athlete> records) {
        

        return null;    // dummy statement
    }
    
    /**
     * Find the total income of the ten highest income athletes in a given year.
     * 
     * @param records   a stream of athletes from the CSV file
     * @param year      a specific year
     * @return          the total income of the top ten highest paid athletes in the year
     */
    static float topTenIncome(Stream<Athlete> records, int year) {
        
        
        return 0f;    // dummy statement
    }
    
    /**
     * Find the most frequent sport on the list.
     * 
     * @param records   a stream of athletes from the CSV file
     * @return          an entry where the key is the sport and the value is the count.
     */
    static Entry<String, Long> mostFrequentSport(Stream<Athlete> records) {
        
        
        return null;    // dummy statement
    }

}

/* ====================================================================================================*/

/**
 * This immutable class represents a single (row) record of the CSV file. 
 * DO NOT modify this class.
 */
class Athlete {

    private final String name;          // name of athlete
    private final String sport;         // sport of athlete
    private final int year;             // year
    private final float income;         // income for year (million)

    public Athlete(String name, String sport, int year, float income) {
        this.name = name;
        this.sport = sport;
        this.year = year;
        this.income = income;
    }

    public String getName() {
        return name;
    }

    public String getSport() {
        return sport;
    }

    public int getYear() {
        return year;
    }

    public float getIncome() {
        return income;
    }

}
