#include <iostream>
#include <string.h>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

string askWord()
{
    string result;
    cin >> result;
    return result;
}

int sumBIT(vector<int> BIT, int i)
{
    int sum = 0;
    while (i > 0)
    {
        sum += BIT[i];
        i -= i & -i;
    }
    return sum;
}

void updateBIT(vector<int> &BIT, int i, int val)
{
    while (i <= BIT.size())
    {
        BIT[i] += val;
        i += i & -i;
    }
}

void convertBIT(vector<int> &arr)
{
    int arr_size = arr.size();
    int *temp = new int[arr_size];
    for (int i = 0; i < arr_size; i++)
        temp[i] = arr[i];
    sort(temp, temp + arr_size);

    for (int i = 0; i < arr_size; i++)
    {
        arr[i] = lower_bound(temp, temp + arr_size, arr[i]) - temp + 1;
    }
}

int compute(vector<int> arr, int word_count)
{
    int count = 0;

    convertBIT(arr);

    vector<int> BIT;
    BIT.resize(word_count + 1);
    for (int i = 1; i <= word_count; i++)
        BIT[i] = 0;

    for (int i = word_count - 1; i >= 0; i--)
    {
        count += sumBIT(BIT, arr[i] - 1);
        updateBIT(BIT, arr[i], 1);
    }

    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    int task_count;
    cin >> task_count;
    vector<int> yoda_level;
    for (int i = task_count; i > 0; i--)
    {
        int word_count;
        cin >> word_count;

        unordered_map<int, string> yoda;

        for (auto i = 0; i < word_count; i++)
            cin >> yoda[i];

        unordered_map<string, int> correct;

        for (auto i = 0; i < word_count; i++)
            correct[askWord()] = i;

        vector<int> inversed, temp;
        temp.resize(word_count);
        for (auto i = 0; i < word_count; i++)
            inversed.push_back(correct[yoda[i]]);

        yoda_level.push_back(compute(inversed, word_count));
    }
    for (auto i : yoda_level)
        cout << i << endl;
    return 0;
}