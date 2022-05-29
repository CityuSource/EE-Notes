#include <cstdlib>
#include <iostream>
#include <unistd.h>

int main(int argc, char **argv)
{
    char *word = argv[1];
    unsigned int interval = strtoul(argv[2], nullptr, 10);
    unsigned int times = strtol(argv[3], nullptr, 10);
    for (int i = 0; i < times; ++i)
    {
        sleep(interval);
        std::cout << word << std::endl;
    }
    return 0;
}