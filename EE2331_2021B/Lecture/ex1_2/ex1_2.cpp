/* 
 * File:   ex1_2.cpp
 * Author: vanting
 *
 */

#include <cstdio>
#include <cstdlib>

/*
 * 
 */
int main(int argc, char **argv)
{
	printf("argc = %d\n", argc);
	for (int i = 0; i < argc; i++)
		printf("argv[%d] = %s\n", i, argv[i]);

	system("pause");
	return (EXIT_SUCCESS);
}
