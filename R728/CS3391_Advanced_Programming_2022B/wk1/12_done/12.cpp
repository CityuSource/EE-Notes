#include <iostream>
#include <string.h>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int askNum()
{
    int result;
    cin >> result;
    return result;
}

string askWord()
{
    string result;
    cin >> result;
    return result;
}

int getSum(vector<int> BITree, int index)
{
    int sum = 0;

    while (index > 0)
    {
        sum += BITree[index];

        index -= index & (-index);
    }
    return sum;
}

void updateBIT(vector<int> &BITree, int arr_size, int i, int value)
{
    while (i <= arr_size)
    {
        BITree[i] += value;
        i += i & -i;
    }
}

void convert_to_BIT(vector<int> &inversed)
{
    int arr_size = inversed.size();
    int *temp = new int[arr_size];
    for (auto i : inversed)
        temp[i] = inversed[i];
    sort(temp, temp + arr_size);

    for (auto i : inversed)
        inversed[i] = lower_bound(temp, temp + arr_size, inversed[i]) - temp + 1;
}

int getInvCount(vector<int> inversed, int arr_size)
{
    vector<int> BIT;
    BIT.resize(arr_size + 1);
    for (int i = 1; i <= arr_size; i++)
        BIT[i] = 0;
    int invcount = 0;
    convert_to_BIT(inversed);
    for (int i = arr_size - 1; i >= 0; i--)
        invcount += getSum(BIT, inversed[i] - 1), updateBIT(BIT, arr_size, inversed[i], 1);

    return invcount;
}

int main()
{
    ios::sync_with_stdio(false);
    int task_count = askNum();
    vector<int> yoda_level;
    for (int i = task_count; i > 0; i--)
    {
        int word_count = askNum();

        unordered_map<int, string> yoda;

        for (auto i = 0; i < word_count; i++)
            yoda[i] = askWord();

        unordered_map<string, int> correct;

        for (auto i = 0; i < word_count; i++)
            correct[askWord()] = i;

        vector<int> inversed, temp;
        temp.resize(word_count);
        for (auto i = 0; i < word_count; i++)
            inversed.push_back(correct[yoda[i]]);

        yoda_level.push_back(getInvCount(inversed, word_count));
    }
    for (auto i : yoda_level)
        cout << yoda_level[i] << endl;
    return 0;
}