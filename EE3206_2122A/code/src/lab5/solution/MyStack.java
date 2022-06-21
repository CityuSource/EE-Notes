package lab5.solution;

import java.util.ArrayList;
import java.util.List;
import lab5.solution.given.Stack;

/**
 *
 * @author Van Ting
 * @param <E> type of stack element
 */
public class MyStack<E> implements Stack<E> {

    private final List<E> list = new ArrayList<>();

    @Override
    public void push(E e) {
        list.add(e);
    }

    @Override
    public E pop() {
        if (list.size() > 0) {
            return list.remove(list.size() - 1);
        } else
            return null;
    }

    @Override
    public E peek() {
        if (list.size() > 0) {
            return list.get(list.size() - 1);
        } else
            return null;
    }

    @Override
    public int size() {
        return list.size();
    }

    @Override
    public boolean isEmpty() {
        return list.isEmpty();
    }

}
