package lab2;

import java.util.concurrent.ThreadLocalRandom;

public class PI {
    public static void main(String[] args) throws Exception {
        int gen = 100000000;
        int res = generator(gen);

        double estPi = (double) res * 4 / (double) gen;
        double diff = Math.abs(Math.PI - estPi);

        System.out.println("Number of throws = " + gen);
        System.out.println("Computed PI = " + estPi);
        System.out.println("Difference  = " + diff);
    }

    private static int generator(int num) {
        int within = 0;

        for (int i = 1; i <= num; i++) {
            double randX = ThreadLocalRandom.current().nextDouble(-1, 1);
            double randY = ThreadLocalRandom.current().nextDouble(-1, 1);
            double distance = Math.sqrt(randX * randX + randY * randY);

            if (distance <= 1)
                within++;
        }

        return within;
    }
}
