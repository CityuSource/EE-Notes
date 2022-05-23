#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#include <algorithm>
#include <set>
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
// User-defined substring function that will take string(str), position(p) and no of character(len) as input
// Produces result c as output
void substring(char s[], char sub[], int p, int len)
{
    int c = 0;
    while (c < len)
    {
        sub[c] = s[p + c];
        c++;
    }
    sub[c] = '\0';
}

// Function thats gives the longest common prefix among two strings.
int lcp(char s[], char t[], char a[])
{
    int n = MIN(strlen(s), strlen(t));
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
        {
            substring(s, a, 0, i);
            return 0;
        }
    }
    substring(s, a, 0, n);
    return 0;
}

int main()
{
    char str[] = "acbdfghybdf";
    char lrs[30], x[30], res[30], sub[30], sub1[30];
    int i, j, n = strlen(str);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            // For comparing each substring with every other substring
            substring(str, sub, i, n);
            substring(str, sub1, j, n);
            sub = sub1 = x;
            // lrs keeps track of the longest repeating sequence
            if (strlen(x) > strlen(lrs))
                strncpy(lrs, x, strlen(x));
        }
    }
    printf("Longest repeating sequence: %s", lrs);
    return 0;
}