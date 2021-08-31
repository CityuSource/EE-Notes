#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>

#define N 5              // chessboard size is NxM
#define M 5              // chessboard size is NxM
#define INIT_X 2         // initial x position of the knight
#define INIT_Y 2         // initial y position of the knight
#define NUM_Sol 10000000 // number of solution to be shown
#define lastStep (N * M - 1)

using std::cout;
using std::endl;
using std::ofstream;
using std::setw;
using std::string;
using std::to_string;

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

    string fileNameHead = (string) "output_" + to_string(N) + (string) "x" + to_string(M);
    string fileNameTail = (string) "_" + to_string(INIT_X) + (string) "_" + to_string(INIT_Y);
    string fileNameType = (string) ".txt";

    ofstream text(fileNameHead + fileNameTail + fileNameType);
    text << "*** Expected Program Output for " << N << " x " << M << " knight's tour ***" << endl;

    // tour starts from (0,0)
    clock_t startTimer = clock();
    solve(INIT_X, INIT_Y, 1, chessboard, count, text);
    clock_t endTimer = clock();

    double takenTime = double(endTimer - startTimer) / (double)CLOCKS_PER_SEC;
    int solutionNum = (count < NUM_Sol) ? count : NUM_Sol;
    text << "\nTime taken by solving the first " << solutionNum << " solutions are " << takenTime << " seconds" << endl;
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