#include <iostream>
#include <vector>
#include <queue>
#include <math.h>
#include <exception>
#include <stdexcept>
using namespace std;

const int digit = 10000;

bool prime_check(int x)
{
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return false;

    return true;
}

void prime_generator(vector<int> &primes)
{
    for (int i = digit / 10; i < digit; i++)
        if (prime_check(i))
            primes.push_back(i);
}

bool is_connected(int a, int b)
{
    int count = 0;
    for (; a > 0; a /= 10, b /= 10)
        if (a % 10 != b % 10)
            count++;
    return count == 1;
}

void graph_generator(vector<vector<int>> &graph, vector<int> primes)
{
    for (int i = 0; i < primes.size(); i++)
        for (int j = i + 1; j <= primes.size() - 1; j++)
        {
            if (is_connected(primes[i], primes[j]))
            {
                graph[primes[i]].push_back(primes[j]);
                graph[primes[j]].push_back(primes[i]);
            }
        }
}

int compute(int src, int dst)
{
    if (src == dst)
        return 0;
    vector<int> primes;
    prime_generator(primes);
    vector<vector<int>> graph;
    graph.resize(digit);
    graph_generator(graph, primes);

    vector<bool> visited(digit, false);
    vector<int> distance;
    distance.resize(digit);
    visited[src] = false, distance[src] = 0;

    queue<int> q;
    q.push(src);
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        for (auto i : graph[temp])
        {
            if (!visited[i])
            {
                visited[i] = true;
                q.push(i);
                distance[i] = distance[temp] + 1;
                // cout << "Visit " << i << " with distance of " << distance[i] << " ";
            }
            if (i == dst)
                return distance[i];
        }
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    int task_count;
    cin >> task_count;
    vector<int> results;
    for (auto i = 0; i < task_count; i++)
    {
        int first_num, second_num;
        cin >> first_num, second_num;

        results.push_back(compute(first_num, second_num));
    }
    for (auto i : results)
        cout << i << endl;
}