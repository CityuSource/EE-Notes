#include <iostream>
#include <cstdlib>
#include <math.h>

double *compression(double *frame, int length)
{
    // quantization
    for (int i = 0; i < length; i++)
    {
        frame[i] = round(10 * frame[i]);
    }
    // dequantization
    for (int i = 0; i < length; i++)
    {
        frame[i] = frame[i] / 10.0;
    }
    return frame;
}