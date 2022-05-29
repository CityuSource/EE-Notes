/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab05.given;

/**
 *
 * @author vanting
 */
public class Card {
    
    // spades, hearts, clubs, diamonds
    public static final String[] SUITS = new String[]{"\u2660", "\u2665", "\u2663", "\u2666"};
    public static final String[] RANKS = new String[]{"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
    public final String suit;
    public final String rank;

    public Card(String suit, String rank) {
        this.suit = suit;
        this.rank = rank;
    }

    @Override
    public String toString() {
        return suit + rank;
    }
}
