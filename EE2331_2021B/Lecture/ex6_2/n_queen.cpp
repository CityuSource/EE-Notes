/* 
 *
 * Simulate the N Queens problem.
 */

#include <cstdio>
#include <cstdlib>

#define NUM_ROWS 8
#define NUM_COLS 8

/*
 * The position is safe if there is not another Queen in
 * the given column and diagonals.
 */
bool safePos(int square[NUM_ROWS][NUM_COLS], int row, int col)
{
    int i;
    bool conflict = false;

    for (i = 1; row - i >= 0 && !conflict; i++)
    {
        /* check the column */
        if (square[row - i][col] == 1)
            conflict = true;

        /* check right diagonal */
        if (col + i < NUM_COLS)
            if (square[row - i][col + i] == 1)
                conflict = true;

        /* check left diagonal */
        if (col - i >= 0)
            if (square[row - i][col - i] == 1)
                conflict = true;
    }
    return !conflict;
}

bool eightQueen(int square[NUM_ROWS][NUM_COLS], int row)
{
    int col;
    bool success = false;

    if (row >= NUM_ROWS) // base case
        success = true;
    else
    { // recursive case
        for (col = 0; col < NUM_COLS && !success; col++)
        {
            if (safePos(square, row, col))
            {
                square[row][col] = 1;
                success = eightQueen(square, row + 1);
                if (!success)
                    square[row][col] = 0;
            }
        }
    }
    return success;
}

void solveEightQueen(int square[NUM_ROWS][NUM_COLS])
{
    int i, j;
    /* initialize the chessboard */
    for (i = 0; i < NUM_ROWS; i++)
        for (j = 0; j < NUM_COLS; j++)
            square[i][j] = 0;

    if (eightQueen(square, 0))
    { /* print solution */
        for (i = 0; i < NUM_ROWS; i++)
        {
            for (j = 0; j < NUM_COLS; j++)
                printf("%2d", square[i][j]);
            printf("\n");
        }
    }
    else
        printf("no solution found\n");
}

int main()
{
    int square[NUM_ROWS][NUM_COLS];
    solveEightQueen(square);

    // system("pause");
    return (EXIT_SUCCESS);
}
