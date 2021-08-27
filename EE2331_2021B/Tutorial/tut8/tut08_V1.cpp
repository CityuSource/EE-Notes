/* 
 * Instructions:
 *
 * 1. Only complete the functions specified below. Do not create any additional function.
 * 2. Use Visual Studio 2019 to build, test and run your code.
 * 3. Do not include any additional header or library.
 *
 */

#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <iostream>

#define N 5      // chessboard size is NxN
#define INIT_X 0 // initial x position of the knight
#define INIT_Y 0 // initial y position of the knight

using namespace std;

/* 
 * A knight's tour is a sequence of moves of a knight on a chessboard such that the knight visits every square only once. 
 *  
 * A knight can move in these 8 directions. The relative coordinates of the next move 
 * of a knight are defined in xMove[] and yMove[] based on the 8 positions marked below.
 * 
 * xMove[] is for the next value of x coordinate.
 * yMove[] is for the next value of y coordinate.
 * 
        . . . . . . . 
        . . M . M . . 
        . M . . . M . 
        . . . K . . .   where K is at (0,0)
        . M . . . M .   <--- M at (2,1) 
        . . M . M . .   <--- M at (1,2)
        . . . . . . . 
 * 
 */
const int xMove[8] = {2, 1, -1, -2, -2, -1, 1, 2};
const int yMove[8] = {1, 2, 2, 1, -1, -2, -2, -1};

void printSolution(int sol[N][N]);

//-------------------------- functions to be implemented by you

/* 
 * 
 * This recursive function finds knight tours using backtracking. It 
 * prints out all possible tours found. 
 * 
 * - The argument (x,y) indicates the current position of knight. 
 * - The argument 'step' indicates the n-th move of the tour. 
 * - The argument chessboard[][] is the chessboard. 
 * - The argument 'count' is the number of solutions found. 
 * 
 */
void solve(int x, int y, int step, int chessboard[N][N], int &count)
{
    int lastStep = N * N - 1;
    if (step > lastStep)
    {
        cout << "\nSolution " << ++count << ":" << endl;
        printSolution(chessboard);
    }
    else
    {
        for (auto i = 0; i < 8; i++)
        {
            int xNext = x + xMove[i], yNext = y + yMove[i];
            if (xNext >= 0 && xNext < N && yNext >= 0 && yNext < N && chessboard[xNext][yNext] == -1)
            {
                chessboard[xNext][yNext] = step;
                solve(xNext, yNext, step + 1, chessboard, count);
                chessboard[xNext][yNext] = -1;
            }
        }
    }
}

//-------------------------- functions prepared for you

/* 
 * A utility function to print solution matrix sol[N][N] 
 */
void printSolution(int sol[N][N])
{
    for (int x = 0; x < N; x++)
    {
        for (int y = 0; y < N; y++)
            cout << setw(3) << sol[x][y];
        cout << endl;
    }
}

/*
 * Driver program to test above functions.
 * 
 * The program should output 304 complete knight tours.
 * Please refer to the expected program output shown below.
 */
int main(int argc, char **argv)
{

    // number of solutions (complete tour) found
    int count = 0;

    // initialize chessboard
    int chessboard[N][N];
    for (int x = 0; x < N; x++)
        for (int y = 0; y < N; y++)
            chessboard[x][y] = -1;

    // set the knight to its initial position
    chessboard[INIT_X][INIT_Y] = 0;

    // tour starts from (0,0)
    solve(INIT_X, INIT_Y, 1, chessboard, count);

    return 0;
}
