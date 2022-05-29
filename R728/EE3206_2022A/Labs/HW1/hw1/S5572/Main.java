package hw1.SID;

public class Main {
    public static boolean ratEscape(Maze maze,Rat rat) { //Method to start the escape route search
        while(!maze.gameover(rat)){
            maze.move(rat.roll());
        }
        if(maze.escaped) return true;
        return false;
    }
    public static void main(String[] args) throws Exception {
        double successruns = 0;
        System.out.println("The Monte Carlo simulation result of one million runs:");
        for(int i = 0; i < 1000000; i++){
            int dimensionSize = 7;
            Maze maze = new Maze(dimensionSize);
            Rat ratatouille = new Rat("ratatouille");
            if(ratEscape(maze, ratatouille)) successruns++;
        }
        System.out.println("Number of succesful escapes: " + successruns);
        System.out.println("Success Rate P: " + Math.floor(successruns/1000)/1000);
    }
}

