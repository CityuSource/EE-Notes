/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package ex5;

/**
 *
 * @author vanting
 * @param <K>
 * @param <V>
 */
public class OrderedPair<K, V> implements Pair<K, V> {

    private final K key;
    private final V value;

    public OrderedPair(K key, V value) {
        this.key = key;
        this.value = value;
    }

    @Override
    public K getKey() {
        return key;
    }

    @Override
    public V getValue() {
        return value;
    }

    public static void main(String[] args) {
        Pair<String, Integer> p1 = new OrderedPair<>("Even", 8);
        Pair<String, String> p2 = new OrderedPair<>("hello", "world");
        Pair<String, GBox<Integer>> p3 = new OrderedPair<>("hello", new GBox<Integer>());
    }
}
