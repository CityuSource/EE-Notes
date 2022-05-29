#include <iostream>
#include <string.h>
#include <unordered_map>
#include <vector>

using namespace std;

// int merge_sort_count(int arr[], int start, int end)
// {
//     if (start == end)
//         return 0;
//     cout << " New function called " << endl;
//     int middle = (start + end) / 2;
//     int divide = merge_sort_count(arr, start, middle);
//     int conquer = merge_sort_count(arr, middle + 1, end);
//     int inverse_count = divide + conquer;
//     cout << "Divide " << divide << "conquer" << endl;
//     for (int left = start, right = middle + 1; left <= middle && right <= end;)
//     {
//         if (arr[left] <= arr[right])
//             left++;
//         else
//         {
//             cout << "Left" << arr[left] << "Right " << arr[right] << endl;
//             right++;
//             inverse_count += (middle - left) + 1;
//         }
//     }
//     cout << "Total " << inverse_count << endl;
//     return inverse_count;i
// }

int residue_count(vector<int> arr, vector<int> temp, int start, int mid, int end)
{
    int i = start, j = mid + 1, k = start, inv_count = 0;

    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            inv_count += (mid - i + 1);
        }
    }

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }

    for (int i = start; i <= end; i++)
    {
        arr[i] = temp[i];
    }

    return inv_count;
}

int inverse_count(vector<int> arr, vector<int> temp, int start, int end)
{
    if (end <= start)
        return 0;

    int mid = (start + end) / 2;
    return inverse_count(arr, temp, start, mid) + inverse_count(arr, temp, mid + 1, end) + residue_count(arr, temp, start, mid, end);
}

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

int main()
{
    int task_count = askNum();

    for (int i = task_count; i > 0; i--)
    {

        int word_count = askNum();

        if (word_count > 30000)
            task_count = 0, cout << "Less than 30000 words pls" << std::endl;

        unordered_map<string, int> yoda;

        for (auto i = 0; i < word_count; i++)
            yoda[askWord()] = i;

        unordered_map<int, string> correct; // initialize map for the 'correct' quote

        for (auto i = 0; i < word_count; i++)
            correct[i] = askWord();

        vector<int> inversed;
        for (auto i = 0; i < word_count; i++)
            inversed.push_back(yoda[correct[i]]);
        vector<int> temp = inversed;
        for (auto i = 0; i < word_count; i++)
            cout << inversed[i];
        cout << endl;

        cout << inverse_count(inversed, temp, 0, word_count - 1);
        /* SIMPLE METHOD WITH O(N^2) TIME COMPLEXITY */
        // for (auto i = 0; i < word_count; i++) // third loop to check the given quotes and generate the result
        // {
        //     for (auto j = i; j < word_count; j++)
        //     {
        //         // find inversion pairs dependent on each word's position in the yoda quote compared to the correct one
        //         // e.g. (4 , 5, 3, 0 ,1 ,2) would have (4, 3), (4,0), etc. as pairs and we count those pairs up to get the level
        //         if (yoda[correct[i]] > yoda[correct[j]])
        //         {
        //             yoda_level++;
        //         }
        //     }
    }
    return 0;
}

int residue_count(vector<int> arr, vector<int> temp, int start, int mid, int end)
{
    if (start == end)
        return 0;
    cout << "Starting with ";
    for (auto i = start; i < end; i++)
        cout << arr[i] << " ";

    cout << endl;
    int i = start, j = mid + 1, k = start, inv_count = 0;

    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
        {
            temp[k++] = arr[j++];
            inv_count += (mid - i + 1);
        }
    }

    while (i <= mid)
        temp[k++] = arr[i++];

    for (int i = start; i <= end; i++)
        arr[i] = temp[i];

    cout << "Returning with residue of" << inv_count << endl;
    return inv_count;
}

int inverse_count(vector<int> arr, vector<int> temp, int start, int end)
{
    if (end <= start)
        return 0;

    cout << "Received ";
    for (auto i = start; i <= end; i++)
        cout << arr[i] << " ";
    cout << endl;
    int mid = (start + end) / 2;
    return inverse_count(arr, temp, start, mid) + inverse_count(arr, temp, mid + 1, end) + residue_count(arr, temp, start, mid, end);
}