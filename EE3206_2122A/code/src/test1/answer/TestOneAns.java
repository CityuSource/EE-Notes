package test1.answer;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.AbstractMap;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Scanner;

/*===================================================================================================
EE3206 Test 1

Student Name:
Student ID:


Problem:

You are given a CSV data file (number-of-internet-users-by-country.csv) and asked to write a program to
analyze the content. There are three methods to be completed in this template:

    1. countryOfMostUsersInYear (5 marks)
    2. worldUsersByYear (10 marks)
    3. yearsOftop3Growth (15 marks)

The main method has been written for you to load the CSV file and test these methods. You should follow the 
specification and implementation requirements written in each method below.


General instructions:

    1. You should only write code inside the three methods, and import the necessary package. Do not modify 
       any other parts in this template.
    2. Though you may observe some data patterns in the CSV file (e.g. the range and order of the data), you should 
       not assume it as a pre-condition of your program unless specified explicitly.
    3. Rename the XXXXXXXX string in the class name to your actual student ID e.g. TestOne56781234


Expected programm output:

The country of most no. of internet users in 2000: United States
The country of most no. of internet users in 2015: China
The no. of internet users in USA grows fastest in: [1994=1.1630199994616384, 1995=0.9206397409753778, 1996=0.7985870492130491]
The no. of internet users in China grows fastest in: [1994=5.992693619094009, 1998=4.237292000205946, 1995=3.2793953747561995]
The total no. of internet users in 2017: Record{country=World, code=OWID_WRL, year=2017, users=2035434679}
The total no. of internet users in 2000: Record{country=World, code=OWID_WRL, year=2000, users=394607893}
The total no. of internet users in 1990: Record{country=World, code=OWID_WRL, year=1990, users=2621404}
 ====================================================================================================*/

public class TestOneAns {

    public static void main(String[] args) {

        // Load the CSV data file. Each row is converted to an instance of Record and
        // saved to a list.
        String filepath = TestOneAns.class.getResource("number-of-internet-users-by-country.csv").getFile();
        List<Record> records = new ArrayList<>();
        try (Scanner scanner = new Scanner(new File(filepath))) {
            scanner.nextLine(); // discard the header
            while (scanner.hasNextLine()) {
                String line = scanner.nextLine();
                String[] token = line.split(",");
                records.add(new Record(token[0], token[1], Integer.parseInt(token[2]), Long.parseLong(token[3])));
            }
        } catch (FileNotFoundException e) {
            System.out.println(e.getMessage());
        }

        System.out.println(
                "The country of most no. of internet users in 2000: " + countryOfMostUsersInYear(records, 2000));
        System.out.println(
                "The country of most no. of internet users in 2015: " + countryOfMostUsersInYear(records, 2015));

        System.out.println("The no. of internet users in USA grows fastest in: " + yearsOftop3Growth(records, "USA"));
        System.out.println("The no. of internet users in China grows fastest in: " + yearsOftop3Growth(records, "CHN"));

        List<Record> wRecords = worldUsersByYear(records);
        System.out.println("The total no. of internet users in 2017: " + wRecords.get(0));
        System.out.println("The total no. of internet users in 2000: " + wRecords.get(17));
        System.out.println("The total no. of internet users in 1990: " + wRecords.get(wRecords.size() - 1));

    }

    /**
     * This method finds the country having most number of internet users in the
     * specific year.
     *
     * @param records a list of records from the CSV file
     * @param year    a specific year
     * @return the name of the country having most number of internet users in the
     *         year
     */
    static String countryOfMostUsersInYear(List<Record> records, int year) {
        long max = 0;
        String country = null;
        for (Record r : records) {
            if (r.getYear() == year && r.getUsers() > max) {
                max = r.getUsers();
                country = r.getCountry();
            }
        }
        return country;
    }

    /**
     * This method computes the total number of internet users in the world for each
     * year. A world record can be constructed using the second constructor in the
     * Record class which presets "World" as the country name and "OWID_WRL" as the
     * country code. The list of world records should be sorted by year in
     * descending order.
     *
     * @param records a list of records from the CSV file
     * @return a list of records that represent the total number of internet users
     *         in the world for each year, sorted by year descendingly
     */
    static List<Record> worldUsersByYear(List<Record> records) {

        List<Record> results = new ArrayList<>();
        Map<Integer, Long> map = new HashMap<>(); // map year -> users

        for (Record r : records) {
            int year = r.getYear();
            long users = r.getUsers();
            if (map.containsKey(year)) {
                map.put(year, map.get(year) + users);
            } else {
                map.put(year, users);
            }
        }

        // convert to list
        for (Entry<Integer, Long> entry : map.entrySet()) {
            results.add(new Record(entry.getKey(), entry.getValue()));
        }

        // sort by year
        Collections.sort(results, new Comparator<Record>() {
            @Override
            public int compare(Record rec0, Record rec1) {
                return rec1.getYear() - rec0.getYear();
            }
        });

        return results;
    }

    /**
     * This method computes the annual growth of the number of internet users of the
     * specified country. It returns the top three years with highest growth in
     * descending order.
     * 
     * annual growth of current year = (no. of users in current year - no. of user
     * in preceding year) / no. of user in preceding year
     * 
     * An entry in the returned list is a key-value pair that associates the year
     * with the growth. To create it, you can use Map.entry() (for JDK 9 and after)
     * or the helper method entry() defined at the end of this class (for JDK 8).
     * 
     * @param records a list of records from the CSV file
     * @param code    a specific country code
     * @return a list of entries of the top three years with highest annual growth,
     *         sorted by growth in descending order
     */
    static List<Entry<Integer, Double>> yearsOftop3Growth(List<Record> records, String code) {

        List<Entry<Integer, Double>> results = new ArrayList<>();

        // filter by country code first
        List<Record> filtered = new ArrayList<>();
        for (Record r : records) {
            if (r.getCode().equals(code)) {
                filtered.add(r);
            }
        }

        // sort by year
        Collections.sort(filtered, new Comparator<Record>() {
            @Override
            public int compare(Record arg0, Record arg1) {
                return arg0.getYear() - arg1.getYear();
            }
        });

        for (int i = 1; i < filtered.size(); i++) {
            if (filtered.get(i - 1).getUsers() > 0) {
                double growth = (double) (filtered.get(i).getUsers() - filtered.get(i - 1).getUsers())
                        / filtered.get(i - 1).getUsers();
                results.add(entry(filtered.get(i).getYear(), growth));
            }
        }

        // sort by growth
        Collections.sort(results, new Comparator<Entry<Integer, Double>>() {
            @Override
            public int compare(Entry<Integer, Double> arg0, Entry<Integer, Double> arg1) {
                if (arg1.getValue() > arg0.getValue()) {
                    return 1;
                } else if (arg1.getValue() < arg0.getValue()) {
                    return -1;
                } else {
                    return 0;
                }
            }
        });

        return results.subList(0, 3);
    }

    // A generic helper factory method to create an instance of Entry
    static <K, V> Entry<K, V> entry(K k, V v) {
        return new AbstractMap.SimpleEntry<>(k, v);
    }

}

/**
 * This immutable class represents a single (row) record of the CSV file. DO NOT
 * modify this class.
 */
class Record {

    private final String country; // country name
    private final String code; // country code
    private final int year; // year
    private final long users; // no. of internet users

    public Record(String country, String code, int year, long users) {
        this.country = country;
        this.code = code;
        this.year = year;
        this.users = users;
    }

    /**
     * Construct a record for the number of internet users in the world, not a
     * particular country. Country name is set to "World" by default. Country code
     * is set to "OWID_WRL" by default.
     */
    public Record(int year, long users) {
        this("World", "OWID_WRL", year, users);
    }

    public String getCountry() {
        return country;
    }

    public String getCode() {
        return code;
    }

    public int getYear() {
        return year;
    }

    public long getUsers() {
        return users;
    }

    @Override
    public String toString() {
        return "Record{" + "country=" + country + ", code=" + code + ", year=" + year + ", users=" + users + '}';
    }

}
