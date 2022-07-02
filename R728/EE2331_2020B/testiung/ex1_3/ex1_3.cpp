/* 
 * File:   ex1_3.cpp
 * Author: vanting
 *
 */

#include <cstdio>
#include <cstdlib>

/*
 * Show the difference between various data types and pointers
 */
int main(int argc, char** argv) {

    char c;
    int i;
    double d;

    char *p2c = &c;
    int *p2i = &i;
    double *p2d = &d;

    printf("Size of char : %d\n", sizeof(c));
    printf("Size of int : %d\n", sizeof(i));
    printf("Size of double : %d\n", sizeof(d));
    printf("\n");

    printf("Size of char pointer: %d\n", sizeof(p2c));
    printf("Size of int pointer : %d\n", sizeof(p2i));
    printf("Size of double pointer : %d\n", sizeof(p2d));
    printf("\n");

    printf("Address of char pointer: %d\n", p2c);
    printf("Address of int pointer : %d\n", p2i);
    printf("Address of double pointer : %d\n", p2d);
    printf("\n");

    printf("Next address of char pointer: %d\n", ++p2c);
    printf("Next address of int pointer : %d\n", ++p2i);
    printf("Next address of double pointer : %d\n", ++p2d);
    printf("\n");

	system("pause");
    return (EXIT_SUCCESS);
}

