/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab05;

import lab05.given.Card;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import static lab05.Deal.rankCode;

/**
 *
 * @author vanting
 */
public class Deal {

    // Make a normal 52-card deck.
    static final Map<String, Integer> suitCode = new HashMap<>();
    static final Map<String, Integer> rankCode = new HashMap<>();

    static {
        suitCode.put("\u2660", 4);
        suitCode.put("\u2665", 3);
        suitCode.put("\u2663", 2);
        suitCode.put("\u2666", 1);
        rankCode.put("2", 1);
        rankCode.put("3", 2);
        rankCode.put("4", 3);
        rankCode.put("5", 4);
        rankCode.put("6", 5);
        rankCode.put("7", 6);
        rankCode.put("8", 7);
        rankCode.put("9", 8);
        rankCode.put("10", 9);
        rankCode.put("J", 10);
        rankCode.put("Q", 11);
        rankCode.put("K", 12);
        rankCode.put("A", 13);
    }

    public static void main(String[] args) {

        // 1. initialize deck
        List<Card> deck = new ArrayList<>();
        for (String suit : Card.SUITS) {
            for (String rank : Card.RANKS) {
                deck.add(new Card(suit, rank));
            }
        }
        System.out.println("Initial:\t" + deck + "\n");

        // 2. Shuffle the deck.
        Collections.shuffle(deck);
        System.out.println("After shuffle:\t" + deck + "\n");

        // 3. deal four hands
        int numHands = 4;
        int cardsPerHand = 13;
        for (int i = 0; i < numHands; i++) {
            List<Card> handView = deck.subList(cardsPerHand * i, cardsPerHand * (i + 1));
            List<Card> hand = new ArrayList<>(handView);
            //handView.clear();

            /*new Comparator<Card>() {
                @Override
                public int compare(Card c1, Card c2) {
                    if (c1.suit.equals(c2.suit)) {
                        return rankCode.get(c1.rank) - rankCode.get(c2.rank);
                    } else {
                        return suitCode.get(c2.suit) - suitCode.get(c1.suit);
                    }

                }
            };*/

            Collections.sort(hand, new MyComparator());

            System.out.println("Hand " + (i + 1) + ":\t" + hand);
        }
    }

    static class MyComparator implements Comparator<Card> {

        @Override
        public int compare(Card c1, Card c2) {
            if (c1.suit.equals(c2.suit)) {
                return rankCode.get(c1.rank) - rankCode.get(c2.rank);
            } else {
                return suitCode.get(c2.suit) - suitCode.get(c1.suit);
            }

        }
    }

}
