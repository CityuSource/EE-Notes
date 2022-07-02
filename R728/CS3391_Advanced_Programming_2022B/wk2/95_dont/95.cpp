#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

bool less(int x, int y)
{
    return x < y;
}

vector<int> takeInput(int size)
{
    string temp, array;
    vector<int> init, result;

    for (auto i = 0; i < size; i++)
    {
        cin >> temp;
        array += temp;
    }
    for (auto i : array)
        cout << i << endl;

    for (auto i : array)
        result.push_back(i - '0');

    return result;
}

void compute(vector<int> &array, int size)
{
    vector<int> input = takeInput(size);
}

int main()
{
    ios::sync_with_stdio(false);
    int size = 1;
    while (size != 0)
    {
        cin >> size;
        vector<int> array;
        for (int i = 0; i < size; i++)
            array.push_back(i);

        compute(array, size);
    }
}