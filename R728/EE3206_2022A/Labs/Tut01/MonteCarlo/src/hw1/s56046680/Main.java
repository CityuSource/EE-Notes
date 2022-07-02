package hw1.s56046680;

/**
 * @Title Homework 1 (LAB2-Q2)
 * @Name Leung Chun Wai
 * @SID 56046680
 */

public class Main {
    public static void main(String[] args) throws Exception {
        int gen = 1000000;
        int res = generator(gen);
        double rate = (double) res / (double) gen;

        System.out.println("The Monte Carlo simulation result of " + gen + " runs: ");
        System.out.println("No. of successful escape: " + res);
        System.out.format("Success Rate P: %.3f", rate);
    }

    private static int generator(int num) {
        int success = 0;

        for (int i = 1; i <= num; i++)
            if (simulation())
                success++;

        return success;
    }

    private static boolean simulation() {
        double[] prob = { 0.2, 0.3, 0.3, 0.2 };
        Mouse mouse = new Mouse(prob);
        Maze map = new Maze(7, 7, 0, 0, 6, 6);

        while (!map.checkEscape())
            map.moveDir(mouse.getDiceRoll());

        return map.checkGoal();
    }
}
