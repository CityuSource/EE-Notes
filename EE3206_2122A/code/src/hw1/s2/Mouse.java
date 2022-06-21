package hw1.s2;

import java.util.concurrent.ThreadLocalRandom;
import java.util.stream.IntStream;

public class Mouse {
    // [0]: North, [1]: East, [2]: South, [3]: West
    private double[] prob;

    public Mouse(double[] prob) {
        this.prob = prob.clone();

        // cover probability array to a cumulative probability array
        for (int i = 1; i < this.prob.length; i++)
            this.prob[i] = this.prob[i] + this.prob[i - 1];
    }

    public Mouse() {
        this(new double[] { 0.25, 0.25, 0.25, 0.25 });
    }

    public int getDiceRoll() {
        // find out where the random number hit and return the last hitted index
        double rand = ThreadLocalRandom.current().nextDouble(0, 1);
        return IntStream.range(0, prob.length).filter(idx -> rand <= prob[idx]).findFirst().orElse(-1);
    }
}
