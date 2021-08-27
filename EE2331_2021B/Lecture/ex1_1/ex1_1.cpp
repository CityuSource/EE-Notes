/*
 * File:   ex1_1.cpp
 * Author: vanting
 *
*/

#include <cstdlib>
#include <cstdio>
#include <iostream>
#include "ex1_1.h" // try to remove this line and compile again to see the problem

/*
 * Demonstrate forward declaration of a function.
 */
int main(int argc, char **argv)
{

    sayHello();

    system("pause");
    return (EXIT_SUCCESS); // same as return 0 but more expressive
}

void sayHello()
{
    printf("Hello ");
    std::cout << "World!\n";
}
