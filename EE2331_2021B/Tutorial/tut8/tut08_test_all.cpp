#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>

#define N 5              // chessboard size is NxM
#define M 5              // chessboard size is NxM
#define INIT_X 0         // initial x position of the knight
#define INIT_Y 0         // initial y position of the knight
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

void initialization(int chessboard[N][M], int x, int y);
void printSolution(int sol[N][M], int &count, ofstream &outfile);
void solve(int x, int y, int step, int chessboard[N][M], int &count, ofstream &outfile);

int main(int argc, char **argv)
{
    int count = 0, chessboard[N][M];

    string fileName = (string) "output_" + to_string(N) + (string) "x" + to_string(M) + (string) "_all";
    string fileNameType = (string) ".txt";

    ofstream text(fileName + fileNameType);
    text << "*** Expected Program Output for " << N << " x " << M << " knight's tour ***" << endl;

    clock_t startTimer = clock();

    for (int x = INIT_X; x < N; x++)
    {
        for (int y = INIT_Y; y < M; y++)
        {
            text << "\nStarting position is (" << x << " , " << y << ")" << endl;
            initialization(chessboard, x, y);
            solve(x, y, 1, chessboard, count, text);
        }
    }

    clock_t endTimer = clock();

    double takenTime = double(endTimer - startTimer) / (double)CLOCKS_PER_SEC;
    int solutionNum = (count < NUM_Sol) ? count : NUM_Sol;
    text << "\nTime taken by solving the first " << solutionNum << " solutions are " << takenTime << " seconds" << endl;
    text.close();

    return 0;
}

void initialization(int chessboard[N][M], int x, int y)
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            chessboard[i][j] = -1;

    chessboard[x][y] = 0;
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