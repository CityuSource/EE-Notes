#include <iostream>
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

unsigned int user[4], answer[4], check[4];

int flag = 1;

int main()
{
    int count = 0, i, j, k, temp;
    srand(time(NULL));

    for (i = 0; i < 4; i++)
    {
        answer[i] = rand() % 8;
    }
    for (i = 0; i < 4; i++)
    {
        if (i == 0)
            cout << "The answer is: ";

        cout << answer[i];

        if (i == 3)
            cout << endl;
    }

    while (flag == 1)
    {
        cout << "Enter the input:\n";
        for (i = 0; i < 4; i++)
        {
            cin >> temp; // User input
            user[i] = temp;
        }

        for (i = 0; i < 4; i++)
        {
            check[i] = 2;
        }

        ////// Code to check the answers ////////////////////////////
        /* ------------------------ Code to check the answers ----------------------- */
        /* ------------------------ Check for correct digits ------------------------ */
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (user[i] == answer[j])
                {
                    check[i] = 0;
                }
            }
        }

        /* --------------------- Next check for correct position -------------------- */

        for (i = 0; i < 4; i++)
        {
            if (user[i] == answer[i])
            {
                check[i] = 1;
            }
        }
        /* -------------------------------------------------------------------------- */
        /* -------------------------------------------------------------------------- */
        for (i = 0; i < 4; i++)
            cout << "the value of check: " << check[i] << "\n";

        for (int i = 0; i < 4; i++)
        {
            // checks if every single answer is correct
            if (check[i] == 1)
            {
                count++;
            }
        }

        if (count == 4)
        {
            // Toggles flag if appropriate and resets count
            flag = 0,
            count = 0;
            cout << "Equilateral\n";
        }
        else
        {
            count = 0;
            cout << "try again\n";
        }
    }
}