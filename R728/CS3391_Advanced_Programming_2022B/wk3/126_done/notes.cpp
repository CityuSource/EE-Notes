#include <cstdio>
#include <vector>
#include <queue>
using namespace std;
// from http://programming-study-notes.blogspot.com/2014/02/blog-post_20.html
int BFS(int Start, int End, vector<int> toPoint[])
{
    int visit[21] = {0};
    queue<int> Q;
    Q.push(Start);

    while (!Q.empty())
    {
        int cur = Q.front();
        Q.pop();

        for (int nxt : toPoint[cur])
        {
            if (visit[nxt] == 0)
            {
                visit[nxt] = visit[cur] + 1;
                if (nxt == End)
                    return visit[nxt];
                Q.push(nxt);
            }
        }
    }
    return -1;
}
int main()
{
    // freopen("input.txt","rt",stdin);
    int N, i, j, point, Case = 1;
    while (scanf("%d", &N) != EOF)
    {
        vector<int> toPoint[21];
        for (j = 0; j < N; ++j)
        {
            scanf("%d", &point);
            toPoint[1].push_back(point);
            toPoint[point].push_back(1);
        }
        for (i = 2; i <= 19; ++i)
        {
            scanf("%d", &N);
            for (j = 0; j < N; ++j)
            {
                scanf("%d", &point);
                toPoint[i].push_back(point);
                toPoint[point].push_back(i);
            }
        }
        scanf("%d", &N);
        printf("Test Set #%d\n", Case++);
        while (N--)
        {
            int start_point, end_point;
            scanf("%d%d", &start_point, &end_point);
            printf("%2d to %2d: %d\n", start_point, end_point,
                   BFS(start_point, end_point, toPoint));
        }
        printf("\n");
    }
    return 0;
}