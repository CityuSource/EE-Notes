/* 
 *
 * Simulate Maze Solver
 */

#include <cstdio>
#include <cstdlib>

#define WIDTH 5               //max maze width
#define HEIGHT 5              //max maze height
#define MAX_LEN WIDTH *HEIGHT //max path size

enum ROOM
{
    WALL,
    EXIT,
    VISITED,
    NONE
};

// four possible moves
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool solve(int maze[HEIGHT][WIDTH], int x, int y, int path[MAX_LEN][2], int move)
{
    int success = 0, i;

    if (x < 0 || x >= WIDTH || y < 0 || y >= HEIGHT)
        return 0; //precondition
    else if (maze[x][y] == EXIT)
        return 1; //a solution has been found
    else if (maze[x][y] == WALL)
        return 0; //not success
    else if (maze[x][y] == VISITED)
        return 0; //not success
    else
    {
        //general cases: room[x][y] == NONE
        maze[x][y] = VISITED;
        for (i = 0; i < 4 && !success; i++)
        {
            success = solve(maze, x + dx[i], y + dy[i], path, move + 1);
            if (success)
            {
                //record a move
                path[move][0] = x + dx[i];
                path[move][1] = y + dy[i];
                return 1;
            }
        }
        return 0;
    }
}

int main()
{

    int i, entrance_x = 0, entrance_y = 0;
    int path[MAX_LEN][2]; //used to record the path
    int maze[HEIGHT][WIDTH] = {
        {NONE, WALL, NONE, NONE, NONE},
        {NONE, WALL, NONE, WALL, NONE},
        {NONE, NONE, NONE, WALL, NONE},
        {WALL, NONE, WALL, NONE, NONE},
        {WALL, NONE, WALL, WALL, EXIT}};

    // initialize path
    for (i = 0; i < MAX_LEN; i++)
    {
        path[i][0] = -1;
        path[i][1] = -1;
    }

    //find the path to exit
    if (solve(maze, entrance_x, entrance_y, path, 0))
    {
        i = 0;
        while (i < MAX_LEN && path[i][0] != -1)
        {
            printf("move %d: (%d, %d)\n", i, path[i][0], path[i][1]);
            i++;
        }
    }
    else
        printf("No solution!\n");

    system("pause");
    return (EXIT_SUCCESS);
}
