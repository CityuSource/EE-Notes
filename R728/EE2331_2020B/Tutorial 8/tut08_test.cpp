#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>

#define N 5      // chessboard size is NxM
#define M 5      // chessboard size is NxM
#define INIT_X 0 // initial x position of the knight
#define INIT_Y 0 // initial y position of the knight

#define NUM_Sol 10000 // number of solution to be shown

using namespace std;

const int xMove[8] = {2, 1, -1, -2, -2, -1, 1, 2};
const int yMove[8] = {1, 2, 2, 1, -1, -2, -2, -1};

void printSolution(int sol[N][M], int &count, ofstream &outfile);
void solve(int x, int y, int step, int chessboard[N][M], int &count, ofstream &outfile);

int main(int argc, char **argv)
{
    // number of solutions (complete tour) found
    int count = 0;

    // initialize chessboard
    int chessboard[N][M];
    for (int x = 0; x < N; x++)
        for (int y = 0; y < M; y++)
            chessboard[x][y] = -1;

    // set the knight to its initial position
    chessboard[INIT_X][INIT_Y] = 0;

    // tour starts from (0,0)
    ofstream text("output.txt");
    solve(INIT_X, INIT_Y, 1, chessboard, count, text);
    text.close();

    return 0;
}

void printSolution(int sol[N][M], int &count, ofstream &outfile)
{
    if (outfile.is_open())
    {
        outfile << "\nSolution " << ++count << ":" << endl;
        for (int x = 0; x < N; x++)
        {
            for (int y = 0; y < M; y++)
                outfile << setw(3) << sol[x][y];
            outfile << endl;
        }
    }
}

void solve(int x, int y, int step, int chessboard[N][M], int &count, ofstream &outfile)
{
    if (count < NUM_Sol)
    {
        int lastStep = N * M - 1;
        if (step > lastStep)
            printSolution(chessboard, count, outfile);
        else
        {
            for (auto i = 0; i < 8; i++)
            {
                int xNext = x + xMove[i], yNext = y + yMove[i];
                if (xNext >= 0 && xNext < N && yNext >= 0 && yNext < M && chessboard[xNext][yNext] == -1)
                {
                    chessboard[xNext][yNext] = step;
                    solve(xNext, yNext, step + 1, chessboard, count, outfile);
                    chessboard[xNext][yNext] = -1;
                }
            }
        }
    }
}