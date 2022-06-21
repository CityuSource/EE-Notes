// package lab5.given;

// import lab5.given.MyStack;

// /**
// *
// * @author Van Ting
// */

// public class TestMyStack {

// public static void main(String[] args) {

// // create two stacks
// Stack<Integer> stack1 = new MyStack<>();
// Stack<Double> stack2 = new MyStack<>();

// // Generate random elements and store in these two stacks
// int randomInt;
// for (int i = 0; i < 20; i++) {
// randomInt = (int) (Math.random() * 100);
// stack1.push(randomInt);
// stack2.push(randomInt / 10.0);
// }

// System.out.print("The top element on Stack 1: ");
// System.out.println(stack1.peek());

// System.out.println("The size of Stack 1: " + stack1.size());

// System.out.print("Stack 1: ");
// while (!stack1.isEmpty())
// System.out.print(stack1.pop() + " ");
// System.out.println("");

// System.out.print("Stack 2: ");
// while (!stack2.isEmpty()) {
// System.out.print(stack2.pop() + " ");
// }
// System.out.println("");

// System.out.println("The size of Stack 1: " + stack1.size());

// }
// }
