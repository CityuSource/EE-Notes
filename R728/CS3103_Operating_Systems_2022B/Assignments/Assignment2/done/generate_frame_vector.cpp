#include <iostream>
#include <cstdlib>
#include "limits.h"
// #include <vector>
using namespace std;
#define MAXIMUM_FRAME_NUM 10

double *generate_frame_vector(int length)
{
    // This function will stop generating frame once the number of frames it generates reaches MAXIMUM_FRAME_NUM
    static int frame_cnt = 0;
    if (frame_cnt >= MAXIMUM_FRAME_NUM)
        return NULL;
    static int seed = 1;
    srand(seed++);
    double *frame_vector = (double *)malloc(length * sizeof(double));
    int i;
    for (i = 0; i < length; i++)
    {
        frame_vector[i] = rand() / (double)RAND_MAX;
    }

    frame_cnt++;

    return frame_vector;
}

void print_frame_vector(double *frame, int length)
{
    // Commented part here is code to find the dimensions by least absolute differece of width and height
    // And then print the frame out with the dimensions found
    //  struct difference
    //  {
    //      int difference, m, n;
    //  };
    //  vector<difference> diff;
    //  for (int i = 2; i <= length; i++)
    //  {
    //      if (length % i == 0)
    //          diff.push_back({abs(i - (length / i)), i, length / i});
    //  }
    //  difference temp;
    //  temp.difference = INT_MAX;
    //  for (auto i : diff)
    //      if (i.difference < temp.difference)
    //          temp = i;
    //  // print out with the right dimensions
    //  for (int i = 0; i < length; i += temp.m)
    //  {
    //      for (int j = 0; j < temp.m; j++)
    //          printf("%d ", (int)frame[i + j]);
    //      cout << endl;
    //  }

    for (int i = 0; i < length; i++)
        printf("%d ", (int)frame[i]);

    cout << endl;
}
